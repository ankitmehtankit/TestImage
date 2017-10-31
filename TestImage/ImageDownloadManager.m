//
//  ImageDownloadManager.m
//  TestImage
//
//  Created by Ankit Mehta on 01/11/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import "ImageDownloadManager.h"
#import "DataModels.h"
#import "AMImageDownloaderOperation.h"

@implementation ImageDownloadManager
@synthesize imageDownloaderQueue;

#define SINGLETON_FOR_CLASS(ImageDownloadManager)
+ (id) sharedImageDownloadManager {
    static dispatch_once_t pred = 0;
    static id _sharedObject = nil;
    dispatch_once(&pred, ^{
        _sharedObject = [[self alloc] init];
    });
    return _sharedObject;
}

- (void)getImageAtURL:(AM_Photo *)objPhoto withCompletionHandler:(imageDownloadManagerCompletion )completionBlock {
    
    _imageDownloadManagerCompletion = completionBlock;
    AMImageDownloaderOperation *operation = [[AMImageDownloaderOperation alloc] initWithPhoto:objPhoto];
    [imageDownloaderQueue addOperation:operation];
//    NSData *imageData = [NSData dataWithContentsOfURL:[NSURL URLWithString:objPhoto.urlT]];
//    if (_imageDownloadManagerCompletion != nil) {
//       // _imageDownloadManagerCompletion(true,imageData, objPhoto.urlT);
//    }
    
}
@end
