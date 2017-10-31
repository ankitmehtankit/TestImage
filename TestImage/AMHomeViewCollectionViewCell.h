//
//  AMHomeViewCollectionViewCell.h
//  TestImage
//
//  Created by Ankit Mehta on 31/10/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataModels.h"

@interface AMHomeViewCollectionViewCell : UICollectionViewCell
{
    IBOutlet UIImageView *image_Cell;
}
@property     IBOutlet UIImageView *image_Cell;

-(void) setCellValueWithPhoto:(AM_Photo *)objPhoto AtIndexPath:(NSIndexPath *)indexPath;
@end
