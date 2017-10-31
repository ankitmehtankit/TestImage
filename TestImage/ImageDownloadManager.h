//
//  ImageDownloadManager.h
//  TestImage
//
//  Created by Ankit Mehta on 01/11/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataModels.h"

typedef void(^imageDownloadManagerCompletion)(BOOL isSuccess, NSData *downloadedImageData, NSString * urlString);


@interface ImageDownloadManager : NSObject
{
    NSOperationQueue *imageDownloaderQueue;
}
@property     NSOperationQueue *imageDownloaderQueue;
@property (nonatomic, copy) void(^imageDownloadManagerCompletion)(BOOL isSuccess, NSData *downloadedImageData, NSString * urlString);

+ (id) sharedImageDownloadManager;
- (void)getImageAtURL:(AM_Photo *)objPhoto withCompletionHandler:(imageDownloadManagerCompletion )completionBlock ;
@end
