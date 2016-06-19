//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOCompletionGroup.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup>
{
    NSString *_localizedSectionHeader;
    NSArray *_items;
}

@property(readonly, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)dealloc;
- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

