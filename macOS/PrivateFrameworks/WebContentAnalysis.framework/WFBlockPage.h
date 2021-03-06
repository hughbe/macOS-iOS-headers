//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WFBlockPage : NSObject
{
    NSURL *pageTemplateURL;
    BOOL isWhitelistBlock;
    BOOL isNetworkAccount;
    NSString *userVisibleURLString;
    NSString *formPostToURLString;
    NSString *formRestrictedPageURLString;
    NSString *formRestrictedPageTitle;
    NSArray *allowedWebSites;
    NSString *preferredLanguage;
}

@property(retain) NSArray *allowedWebSites; // @synthesize allowedWebSites;
@property(retain) NSString *formRestrictedPageTitle; // @synthesize formRestrictedPageTitle;
@property(retain) NSString *formRestrictedPageURLString; // @synthesize formRestrictedPageURLString;
@property(retain) NSString *formPostToURLString; // @synthesize formPostToURLString;
@property(retain) NSString *userVisibleURLString; // @synthesize userVisibleURLString;
@property(readonly) BOOL isWhitelistBlock; // @synthesize isWhitelistBlock;
@property(readonly) NSURL *pageTemplateURL; // @synthesize pageTemplateURL;
- (id)page;
- (id)_allowedWebSitesHTML;
- (id)_xssSafeStringFromString:(id)arg1;
- (id)_javascript;
- (id)_css;
- (id)_fileContentWithName:(id)arg1 extension:(id)arg2;
- (id)_blockpage;
- (void)dealloc;
- (id)initWithErrorPage;
- (id)initNoOveridePageWithUsername:(id)arg1;
- (id)initWithUsername:(id)arg1 isWhitelistBlock:(BOOL)arg2 isNetworkAccount:(BOOL)arg3;
- (id)_initWithUsername:(id)arg1 isWhitelistBlock:(BOOL)arg2 isNetworkAccount:(BOOL)arg3 isError:(BOOL)arg4;
- (id)_initWithUsername:(id)arg1 fileName:(id)arg2;

@end

