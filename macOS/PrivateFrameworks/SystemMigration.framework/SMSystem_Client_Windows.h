//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SMSystem_Client_Network.h>

@class NSArray, NSImage, NSString;

@interface SMSystem_Client_Windows : SMSystem_Client_Network
{
    NSString *driveLetter;
    NSArray *components;
    NSImage *volumeIcon;
}

+ (id)guiInterestedKeys;
- (void).cxx_destruct;
@property(retain) NSImage *volumeIcon; // @synthesize volumeIcon;
@property(retain) NSArray *components; // @synthesize components;
@property(retain) NSString *driveLetter; // @synthesize driveLetter;
- (id)userFromXpcDictionary:(id)arg1;
- (long long)defaultUIRank;

@end

