//
//  AMHomeViewCollectionViewCell.m
//  TestImage
//
//  Created by Ankit Mehta on 31/10/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import "AMHomeViewCollectionViewCell.h"
//#import "UIImageView+WebCache.h"
#import "ImageDownloadManager.h"

@implementation AMHomeViewCollectionViewCell
@synthesize image_Cell;

-(void) setCellValueWithPhoto:(AM_Photo *)objPhoto AtIndexPath:(NSIndexPath *)indexPath {
//    [image_Cell sd_setImageWithURL:[NSURL URLWithString:objPhoto.urlT]];
//    [image_Cell sd_setImageWithURL:[NSURL URLWithString:objPhoto.urlT]];
    [[ImageDownloadManager sharedImageDownloadManager] getImageAtURL:objPhoto withCompletionHandler:^(BOOL isSuccess, NSData *downloadedImageData, NSString *urlString) {
        if (isSuccess) {
            [image_Cell setImage:[UIImage imageWithData:downloadedImageData]];
        }
    }];
//    [image_Cell setImage:[UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:objPhoto.urlT]]]];
}
@end
