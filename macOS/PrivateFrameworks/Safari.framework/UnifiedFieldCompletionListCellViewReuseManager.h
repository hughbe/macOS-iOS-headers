//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, UnifiedFieldCompletionStyledTableCellView;
@protocol ParsecTableCellView;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject
{
    NSMutableDictionary *_viewArraysByClass;
    NSCountedSet *_viewIndicesByClass;
    NSMutableDictionary *_parsecCellReuseManagersByIdentifier;
    UnifiedFieldCompletionStyledTableCellView<ParsecTableCellView> *_mostRecentlyUsedParsecCellView;
}

+ (id)sharedManager;
+ (int)cellViewTypeForResult:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UnifiedFieldCompletionStyledTableCellView<ParsecTableCellView> *mostRecentlyUsedParsecCellView; // @synthesize mostRecentlyUsedParsecCellView=_mostRecentlyUsedParsecCellView;
- (id)_identifierForParsecCellViewType:(int)arg1;
- (id)_createCellViewWithIdentifier:(id)arg1 fromNib:(id)arg2;
- (id)_nextCellViewOfClass:(Class)arg1;
- (id)_init;
- (void)prepareForReload;
- (id)_createParsecCellViewWithIdentifier:(id)arg1;
- (Class)_parsecCellViewClassFromIdentifier:(id)arg1;
- (BOOL)_shouldProgramaticallyCreateParsecCellViewWithIdentifier:(id)arg1;
- (id)_parsecCellViewOfType:(int)arg1 forSearchResult:(id)arg2;
- (id)parsecCellViewOfType:(int)arg1 forSearchResult:(id)arg2;
- (id)nextStyledOneLineTableCellView;
- (id)nextTextCellView;
- (id)nextImageAndTextCellView;
- (id)nextHeaderCellView;
- (id)init;

@end

