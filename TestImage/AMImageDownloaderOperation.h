//
//  AMImageDownloaderOperation.h
//  TestImage
//
//  Created by Ankit Mehta on 01/11/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataModels.h"

typedef void(^AMImageDownloaderOperationCompletion)(BOOL isSuccess, NSData *downloadedImageData, NSString * urlString);

@interface AMImageDownloaderOperation : NSOperation
{
    AM_Photo *objPhoto;
}
@property void(^AMImageDownloaderOperationCompletion)(BOOL isSuccess, NSData *downloadedImageData, NSString * urlString);
-(id)initWithPhoto:(AM_Photo *)objPhotoOld;

@end
