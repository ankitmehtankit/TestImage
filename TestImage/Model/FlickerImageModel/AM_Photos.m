//
//  AM_Photos.m
//
//  Created by Ankit Mehta on 31/10/17
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import "AM_Photos.h"
#import "AM_Photo.h"


NSString *const kAM_PhotosPhoto = @"photo";
NSString *const kAM_PhotosPages = @"pages";
NSString *const kAM_PhotosPerpage = @"perpage";
NSString *const kAM_PhotosTotal = @"total";
NSString *const kAM_PhotosPage = @"page";


@interface AM_Photos ()

- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end

@implementation AM_Photos

@synthesize photo = _photo;
@synthesize pages = _pages;
@synthesize perpage = _perpage;
@synthesize total = _total;
@synthesize page = _page;


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
    NSObject *receivedAM_Photo = [dict objectForKey:kAM_PhotosPhoto];
    NSMutableArray *parsedAM_Photo = [NSMutableArray array];
    if ([receivedAM_Photo isKindOfClass:[NSArray class]]) {
        for (NSDictionary *item in (NSArray *)receivedAM_Photo) {
            if ([item isKindOfClass:[NSDictionary class]]) {
                [parsedAM_Photo addObject:[AM_Photo modelObjectWithDictionary:item]];
            }
       }
    } else if ([receivedAM_Photo isKindOfClass:[NSDictionary class]]) {
       [parsedAM_Photo addObject:[AM_Photo modelObjectWithDictionary:(NSDictionary *)receivedAM_Photo]];
    }

    self.photo = [NSArray arrayWithArray:parsedAM_Photo];
            self.pages = [[self objectOrNilForKey:kAM_PhotosPages fromDictionary:dict] doubleValue];
            self.perpage = [[self objectOrNilForKey:kAM_PhotosPerpage fromDictionary:dict] doubleValue];
            self.total = [self objectOrNilForKey:kAM_PhotosTotal fromDictionary:dict];
            self.page = [[self objectOrNilForKey:kAM_PhotosPage fromDictionary:dict] doubleValue];

    }
    
    return self;
    
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *mutableDict = [NSMutableDictionary dictionary];
    NSMutableArray *tempArrayForPhoto = [NSMutableArray array];
    for (NSObject *subArrayObject in self.photo) {
        if([subArrayObject respondsToSelector:@selector(dictionaryRepresentation)]) {
            // This class is a model object
            [tempArrayForPhoto addObject:[subArrayObject performSelector:@selector(dictionaryRepresentation)]];
        } else {
            // Generic object
            [tempArrayForPhoto addObject:subArrayObject];
        }
    }
    [mutableDict setValue:[NSArray arrayWithArray:tempArrayForPhoto] forKey:kAM_PhotosPhoto];
    [mutableDict setValue:[NSNumber numberWithDouble:self.pages] forKey:kAM_PhotosPages];
    [mutableDict setValue:[NSNumber numberWithDouble:self.perpage] forKey:kAM_PhotosPerpage];
    [mutableDict setValue:self.total forKey:kAM_PhotosTotal];
    [mutableDict setValue:[NSNumber numberWithDouble:self.page] forKey:kAM_PhotosPage];

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

    self.photo = [aDecoder decodeObjectForKey:kAM_PhotosPhoto];
    self.pages = [aDecoder decodeDoubleForKey:kAM_PhotosPages];
    self.perpage = [aDecoder decodeDoubleForKey:kAM_PhotosPerpage];
    self.total = [aDecoder decodeObjectForKey:kAM_PhotosTotal];
    self.page = [aDecoder decodeDoubleForKey:kAM_PhotosPage];
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{

    [aCoder encodeObject:_photo forKey:kAM_PhotosPhoto];
    [aCoder encodeDouble:_pages forKey:kAM_PhotosPages];
    [aCoder encodeDouble:_perpage forKey:kAM_PhotosPerpage];
    [aCoder encodeObject:_total forKey:kAM_PhotosTotal];
    [aCoder encodeDouble:_page forKey:kAM_PhotosPage];
}

- (id)copyWithZone:(NSZone *)zone
{
    AM_Photos *copy = [[AM_Photos alloc] init];
    
    if (copy) {

        copy.photo = [self.photo copyWithZone:zone];
        copy.pages = self.pages;
        copy.perpage = self.perpage;
        copy.total = [self.total copyWithZone:zone];
        copy.page = self.page;
    }
    
    return copy;
}


@end
