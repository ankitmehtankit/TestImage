//
//  ViewController.m
//  TestImage
//
//  Created by Pastel Dreams on 31/10/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import "ViewController.h"
#import "AMParser.h"
#import "AMHomeViewCollectionViewCell.h"

@interface ViewController ()<UITextFieldDelegate,UICollectionViewDelegate, UICollectionViewDataSource>
{
    int numberOfCellsinARow;
}
@property (weak, nonatomic) IBOutlet UITextField *textField_Search;
@property (strong, nonatomic) NSMutableArray *arrayCollection;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView_Home;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    _arrayCollection = [NSMutableArray new];
    numberOfCellsinARow = 3;
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(IBAction)onClickSearch:(id)sender {
    [self.textField_Search resignFirstResponder];
    [self makeSearchAPICallFromFlicker];
}
-(IBAction)onClickMoreOptions:(id)sender {
    
}
-(BOOL) textFieldShouldReturn:(UITextField *)textField {
    if (textField.text.length > 0) {
        [self makeSearchAPICallFromFlicker];
    }
    [textField resignFirstResponder];
    return YES;
}
-(void) makeSearchAPICallFromFlicker {
    NSString *url =[NSString stringWithFormat:@"https://api.flickr.com/services/rest/?method=flickr.photos.search&api_key=%@&tags=%@&per_page=50&format=json&nojsoncallback=1&extras=url_t", k_Flicker_APIKey, _textField_Search.text];
    [[AMParser new] connectionRequestForJsonWithURL:url  withJsonDictionary:[NSDictionary new] withSuccessCompletionHandler:^(NSData *objectNotation, NSString *urlString) {
        NSError* error;
        NSDictionary *json = [NSJSONSerialization JSONObjectWithData:objectNotation
                                                             options:NSUTF8StringEncoding
                                                               error:&error];
        if (error) {
            if (error) {
                [[[UIAlertView alloc]initWithTitle:@"Error" message:error.localizedDescription delegate:self cancelButtonTitle:@"OK" otherButtonTitles: nil] show];//Done
            }
        }
        else {
            AM_GetImageModel *objImageModel = [AM_GetImageModel modelObjectWithDictionary:json];
            if ([objImageModel.stat isEqualToString:@"ok"]) {
                for (AM_Photo *objPhoto in objImageModel.photos.photo) {
                    if (![_arrayCollection containsObject:objPhoto]) {
                        [_arrayCollection addObject:objPhoto];
                    }
                }
                [self.collectionView_Home reloadData];
            }
        }
    } withFailedCompletionHandler:^(NSError *error, NSString *urlString) {
        [[[UIAlertView alloc] initWithTitle:@"Error" message:error.localizedDescription delegate:self cancelButtonTitle:@"OK" otherButtonTitles: nil] show];
    }];
}
-(NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return _arrayCollection.count;
}
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    AMHomeViewCollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"AMHomeViewCollectionViewCell" forIndexPath:indexPath];
    AM_Photo *photoObject = [_arrayCollection objectAtIndex:indexPath.row];
    [cell setCellValueWithPhoto:photoObject AtIndexPath:indexPath];
    return cell;
}
- (CGSize)collectionView:(UICollectionView *)collectionView
                  layout:(UICollectionViewLayout *)collectionViewLayout
  sizeForItemAtIndexPath:(NSIndexPath *)indexPath {
    float finalWidth = (self.view.bounds.size.width-11)/numberOfCellsinARow;
    return CGSizeMake(finalWidth, finalWidth);
}
@end
