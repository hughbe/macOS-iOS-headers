//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactsLoggerProvider-Protocol.h>

@class NSString;
@protocol CNContactsLogger, CNFavoritesLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider>
{
    id <CNContactsLogger> _contactsLogger;
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;
    id <CNRegulatoryLogger> _regulatoryLogger;
    id <CNFavoritesLogger> _favoritesLogger;
}

+ (id)defaultProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNFavoritesLogger> favoritesLogger;
@property(readonly, nonatomic) id <CNRegulatoryLogger> regulatoryLogger;
@property(readonly, nonatomic) id <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property(readonly, nonatomic) id <CNContactsLogger> contactsLogger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

