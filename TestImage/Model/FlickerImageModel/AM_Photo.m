//
//  AM_Photo.m
//
//  Created by Ankit Mehta on 31/10/17
//  Copyright (c) 2017 __MyCompanyName__. All rights reserved.
//

#import "AM_Photo.h"


NSString *const kAM_PhotoSecret = @"secret";
NSString *const kAM_PhotoId = @"id";
NSString *const kAM_PhotoIsfamily = @"isfamily";
NSString *const kAM_PhotoIspublic = @"ispublic";
NSString *const kAM_PhotoFarm = @"farm";
NSString *const kAM_PhotoOwner = @"owner";
NSString *const kAM_PhotoServer = @"server";
NSString *const kAM_PhotoTitle = @"title";
NSString *const kAM_PhotoIsfriend = @"isfriend";
NSString *const kAM_PhotoUrlT = @"url_t";
NSString *const kAM_PhotoHeightT = @"height_t";
NSString *const kAM_PhotoWidthT = @"width_t";


@interface AM_Photo ()

- (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end

@implementation AM_Photo

@synthesize secret = _secret;
@synthesize photoIdentifier = _photoIdentifier;
@synthesize isfamily = _isfamily;
@synthesize ispublic = _ispublic;
@synthesize farm = _farm;
@synthesize owner = _owner;
@synthesize server = _server;
@synthesize title = _title;
@synthesize isfriend = _isfriend;
@synthesize urlT = _urlT;
@synthesize heightT = _heightT;
@synthesize widthT = _widthT;


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
            self.secret = [self objectOrNilForKey:kAM_PhotoSecret fromDictionary:dict];
            self.photoIdentifier = [self objectOrNilForKey:kAM_PhotoId fromDictionary:dict];
            self.isfamily = [[self objectOrNilForKey:kAM_PhotoIsfamily fromDictionary:dict] doubleValue];
            self.ispublic = [[self objectOrNilForKey:kAM_PhotoIspublic fromDictionary:dict] doubleValue];
            self.farm = [[self objectOrNilForKey:kAM_PhotoFarm fromDictionary:dict] doubleValue];
            self.owner = [self objectOrNilForKey:kAM_PhotoOwner fromDictionary:dict];
            self.server = [self objectOrNilForKey:kAM_PhotoServer fromDictionary:dict];
            self.title = [self objectOrNilForKey:kAM_PhotoTitle fromDictionary:dict];
            self.isfriend = [[self objectOrNilForKey:kAM_PhotoIsfriend fromDictionary:dict] doubleValue];
            self.urlT = [self objectOrNilForKey:kAM_PhotoUrlT fromDictionary:dict];
            self.heightT = [self objectOrNilForKey:kAM_PhotoHeightT fromDictionary:dict];
            self.widthT = [self objectOrNilForKey:kAM_PhotoWidthT fromDictionary:dict];

    }
    
    return self;
    
}

- (NSDictionary *)dictionaryRepresentation
{
    NSMutableDictionary *mutableDict = [NSMutableDictionary dictionary];
    [mutableDict setValue:self.secret forKey:kAM_PhotoSecret];
    [mutableDict setValue:self.photoIdentifier forKey:kAM_PhotoId];
    [mutableDict setValue:[NSNumber numberWithDouble:self.isfamily] forKey:kAM_PhotoIsfamily];
    [mutableDict setValue:[NSNumber numberWithDouble:self.ispublic] forKey:kAM_PhotoIspublic];
    [mutableDict setValue:[NSNumber numberWithDouble:self.farm] forKey:kAM_PhotoFarm];
    [mutableDict setValue:self.owner forKey:kAM_PhotoOwner];
    [mutableDict setValue:self.server forKey:kAM_PhotoServer];
    [mutableDict setValue:self.title forKey:kAM_PhotoTitle];
    [mutableDict setValue:[NSNumber numberWithDouble:self.isfriend] forKey:kAM_PhotoIsfriend];
    [mutableDict setValue:self.urlT forKey:kAM_PhotoUrlT];
    [mutableDict setValue:self.heightT forKey:kAM_PhotoHeightT];
    [mutableDict setValue:self.widthT forKey:kAM_PhotoWidthT];

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

    self.secret = [aDecoder decodeObjectForKey:kAM_PhotoSecret];
    self.photoIdentifier = [aDecoder decodeObjectForKey:kAM_PhotoId];
    self.isfamily = [aDecoder decodeDoubleForKey:kAM_PhotoIsfamily];
    self.ispublic = [aDecoder decodeDoubleForKey:kAM_PhotoIspublic];
    self.farm = [aDecoder decodeDoubleForKey:kAM_PhotoFarm];
    self.owner = [aDecoder decodeObjectForKey:kAM_PhotoOwner];
    self.server = [aDecoder decodeObjectForKey:kAM_PhotoServer];
    self.title = [aDecoder decodeObjectForKey:kAM_PhotoTitle];
    self.isfriend = [aDecoder decodeDoubleForKey:kAM_PhotoIsfriend];
    self.urlT = [aDecoder decodeObjectForKey:kAM_PhotoUrlT];
    self.heightT = [aDecoder decodeObjectForKey:kAM_PhotoHeightT];
    self.widthT = [aDecoder decodeObjectForKey:kAM_PhotoWidthT];
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{

    [aCoder encodeObject:_secret forKey:kAM_PhotoSecret];
    [aCoder encodeObject:_photoIdentifier forKey:kAM_PhotoId];
    [aCoder encodeDouble:_isfamily forKey:kAM_PhotoIsfamily];
    [aCoder encodeDouble:_ispublic forKey:kAM_PhotoIspublic];
    [aCoder encodeDouble:_farm forKey:kAM_PhotoFarm];
    [aCoder encodeObject:_owner forKey:kAM_PhotoOwner];
    [aCoder encodeObject:_server forKey:kAM_PhotoServer];
    [aCoder encodeObject:_title forKey:kAM_PhotoTitle];
    [aCoder encodeDouble:_isfriend forKey:kAM_PhotoIsfriend];
    [aCoder encodeObject:_urlT forKey:kAM_PhotoUrlT];
    [aCoder encodeObject:_heightT forKey:kAM_PhotoHeightT];
    [aCoder encodeObject:_widthT forKey:kAM_PhotoWidthT];
}

- (id)copyWithZone:(NSZone *)zone
{
    AM_Photo *copy = [[AM_Photo alloc] init];
    
    if (copy) {

        copy.secret = [self.secret copyWithZone:zone];
        copy.photoIdentifier = [self.photoIdentifier copyWithZone:zone];
        copy.isfamily = self.isfamily;
        copy.ispublic = self.ispublic;
        copy.farm = self.farm;
        copy.owner = [self.owner copyWithZone:zone];
        copy.server = [self.server copyWithZone:zone];
        copy.title = [self.title copyWithZone:zone];
        copy.isfriend = self.isfriend;
        copy.urlT = [self.urlT copyWithZone:zone];
        copy.heightT = [self.heightT copyWithZone:zone];
        copy.widthT = [self.widthT copyWithZone:zone];
    }
    
    return copy;
}


@end
