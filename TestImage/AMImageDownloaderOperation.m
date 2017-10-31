//
//  AMImageDownloaderOperation.m
//  TestImage
//
//  Created by Ankit Mehta on 01/11/17.
//  Copyright © 2017 Pastel Dreams. All rights reserved.
//

#import "AMImageDownloaderOperation.h"

@implementation AMImageDownloaderOperation

-(id)init {
    
    return self;
}
-(id)initWithPhoto:(AM_Photo *)objPhotoOld {
    objPhoto = objPhotoOld;
    return self;
}
-(void) main {
    NSLog(@"Calling main function for NSOperation in Background");
    NSLog(@"objPhoto URL = %@",objPhoto.urlT);
}
@end
