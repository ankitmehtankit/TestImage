//
//  AM_GetImageModel.m
//
//  Created by Ankit Mehta on 31/10/17
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import "AM_GetImageModel.h"
#import "AM_Photos.h"


NSString *const kAM_GetImageModelStat = @"stat";
NSString *const kAM_GetImageModelPhotos = @"photos";


@interface AM_GetImageModel ()

- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end

@implementation AM_GetImageModel

@synthesize stat = _stat;
@synthesize photos = _photos;


+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict
{
    return [[self alloc] initWithDictionary:dict];
}

- (instancetype)initWithDictionary:(NSDictionary *)dict
{
    self = [super init];
    
    // This check serves to make sure that a non-NSDictionary object
    // passed into the model class doesn't break the parsing.
    if(self && [dict isKindOfClass:[NSDictionary class]]) {
            self.stat = [self objectOrNilForKey:kAM_GetImageModelStat fromDictionary:dict];
            self.photos = [AM_Photos modelObjectWithDictionary:[dict objectForKey:kAM_GetImageModelPhotos]];

    }
    
    return self;
    
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *mutableDict = [NSMutableDictionary dictionary];
    [mutableDict setValue:self.stat forKey:kAM_GetImageModelStat];
    [mutableDict setValue:[self.photos dictionaryRepresentation] forKey:kAM_GetImageModelPhotos];

    return [NSDictionary dictionaryWithDictionary:mutableDict];
}

- (NSString *)description 
{
    return [NSString stringWithFormat:@"%@", [self dictionaryRepresentation]];
}

#pragma mark - Helper Method
- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict
{
    id object = [dict objectForKey:aKey];
    return [object isEqual:[NSNull null]] ? nil : object;
}


#pragma mark - NSCoding Methods

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super init];

    self.stat = [aDecoder decodeObjectForKey:kAM_GetImageModelStat];
    self.photos = [aDecoder decodeObjectForKey:kAM_GetImageModelPhotos];
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{

    [aCoder encodeObject:_stat forKey:kAM_GetImageModelStat];
    [aCoder encodeObject:_photos forKey:kAM_GetImageModelPhotos];
}

- (id)copyWithZone:(NSZone *)zone
{
    AM_GetImageModel *copy = [[AM_GetImageModel alloc] init];
    
    if (copy) {

        copy.stat = [self.stat copyWithZone:zone];
        copy.photos = [self.photos copyWithZone:zone];
    }
    
    return copy;
}


@end
