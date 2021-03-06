//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmark, WebBookmarkList;

__attribute__((visibility("hidden")))
@interface BookmarkRemovalUndoInfo : NSObject
{
    WebBookmark *_bookmark;
    WebBookmarkList *_parent;
    unsigned long long _index;
}

+ (id)infoWithBookmark:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, retain, nonatomic) WebBookmarkList *parent; // @synthesize parent=_parent;
@property(readonly, retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (id)initWithBookmark:(id)arg1;
- (id)init;

@end

