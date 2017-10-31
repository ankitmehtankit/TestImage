//
//  AM_Photos.h
//
//  Created by Ankit Mehta on 31/10/17
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface AM_Photos : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSArray *photo;
@property (nonatomic, assign) double pages;
@property (nonatomic, assign) double perpage;
@property (nonatomic, strong) NSString *total;
@property (nonatomic, assign) double page;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
