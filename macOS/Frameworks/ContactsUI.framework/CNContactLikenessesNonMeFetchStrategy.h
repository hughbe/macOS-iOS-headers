//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessesFetchStrategy.h"

@class CNContact, CNUIPRLikenessResolver, NSString;

@interface CNContactLikenessesNonMeFetchStrategy : NSObject <CNContactLikenessesFetchStrategy>
{
    CNUIPRLikenessResolver *_likenessResolver;
    CNContact *_contact;
}

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNUIPRLikenessResolver *likenessResolver; // @synthesize likenessResolver=_likenessResolver;
- (void).cxx_destruct;
- (id)contactLikenessesModel;
- (id)initWithLikenessResolver:(id)arg1 contact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

