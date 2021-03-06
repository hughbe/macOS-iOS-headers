//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UAUPlugin/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface UpdaterSessionParameters : NSObject <NSCopying>
{
    BOOL _accountWasMigrated;
    BOOL _updateIsFLO;
    unsigned int _userID;
    unsigned int _groupID;
    NSURL *_homeDirectory;
    NSString *_previousOSVersion;
    NSString *_previousOSBuild;
    NSString *_currentOSVersion;
    NSString *_currentOSBuild;
}

+ (long long)compareSpecificOSVersion:(id)arg1 toSpecificOSVersion:(id)arg2;
- (void).cxx_destruct;
@property unsigned int groupID; // @synthesize groupID=_groupID;
@property unsigned int userID; // @synthesize userID=_userID;
@property(retain) NSString *currentOSBuild; // @synthesize currentOSBuild=_currentOSBuild;
@property(retain) NSString *currentOSVersion; // @synthesize currentOSVersion=_currentOSVersion;
@property(retain) NSString *previousOSBuild; // @synthesize previousOSBuild=_previousOSBuild;
@property(retain) NSString *previousOSVersion; // @synthesize previousOSVersion=_previousOSVersion;
@property BOOL updateIsFLO; // @synthesize updateIsFLO=_updateIsFLO;
@property BOOL accountWasMigrated; // @synthesize accountWasMigrated=_accountWasMigrated;
@property(retain) NSURL *homeDirectory; // @synthesize homeDirectory=_homeDirectory;
- (long long)compareSpecificOSVersion:(id)arg1 toSpecificOSVersion:(id)arg2;
- (long long)compareToSpecificOSVersion:(id)arg1;
- (long long)compareOSVersion;
@property(readonly) BOOL newUser;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

