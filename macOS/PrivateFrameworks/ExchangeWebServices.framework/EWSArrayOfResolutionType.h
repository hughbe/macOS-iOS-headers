//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSArray, NSString;

@interface EWSArrayOfResolutionType : NSObject <XSDefinitionProvider>
{
    NSArray *_Resolution;
    long long _IndexedPagingOffset;
    long long _NumeratorOffset;
    long long _AbsoluteDenominator;
    long long _IncludesLastItemInRange;
    long long _TotalItemsInView;
}

+ (id)definition;
@property(nonatomic) long long TotalItemsInView; // @synthesize TotalItemsInView=_TotalItemsInView;
@property(nonatomic) long long IncludesLastItemInRange; // @synthesize IncludesLastItemInRange=_IncludesLastItemInRange;
@property(nonatomic) long long AbsoluteDenominator; // @synthesize AbsoluteDenominator=_AbsoluteDenominator;
@property(nonatomic) long long NumeratorOffset; // @synthesize NumeratorOffset=_NumeratorOffset;
@property(nonatomic) long long IndexedPagingOffset; // @synthesize IndexedPagingOffset=_IndexedPagingOffset;
@property(copy, nonatomic) NSArray *Resolution; // @synthesize Resolution=_Resolution;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

