//
//  AM_Photo.h
//
//  Created by Ankit Mehta on 31/10/17
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface AM_Photo : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSString *secret;
@property (nonatomic, strong) NSString *photoIdentifier;
@property (nonatomic, assign) double isfamily;
@property (nonatomic, assign) double ispublic;
@property (nonatomic, assign) double farm;
@property (nonatomic, strong) NSString *owner;
@property (nonatomic, strong) NSString *server;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) double isfriend;
@property (nonatomic, strong) NSString *urlT;
@property (nonatomic, strong) NSString *heightT;
@property (nonatomic, strong) NSString *widthT;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
