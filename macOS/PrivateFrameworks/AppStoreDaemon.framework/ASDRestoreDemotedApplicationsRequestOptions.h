//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions
{
    NSNumber *_accountID;
    NSString *_appleID;
    NSArray *_bundleIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
- (id)initWithBundleIDs:(id)arg1;
- (id)init;

@end

