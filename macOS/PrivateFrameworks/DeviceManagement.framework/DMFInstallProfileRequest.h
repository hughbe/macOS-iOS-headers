//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSString;

@interface DMFInstallProfileRequest : DMFTaskRequest
{
    unsigned long long _style;
    unsigned long long _type;
    NSString *_managingProfileIdentifier;
    NSData *_profileData;
    NSString *_personaID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(copy, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

