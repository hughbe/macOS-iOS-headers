//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BookmarkChange : NSObject
{
    int _changeType;
    NSString *_token;
    NSString *_bookmarkUUID;
    long long _bookmarkType;
    NSString *_bookmarkSyncServerID;
}

+ (id)bookmarkChangeWithDictionaryRepresentation:(id)arg1;
+ (id)bookmarkChangeWithBookmark:(id)arg1 changeType:(int)arg2;
+ (void)removeRedundantChangesInArray:(id)arg1;
@property(readonly, copy, nonatomic) NSString *bookmarkSyncServerID; // @synthesize bookmarkSyncServerID=_bookmarkSyncServerID;
@property(readonly, nonatomic) long long bookmarkType; // @synthesize bookmarkType=_bookmarkType;
@property(readonly, copy, nonatomic) NSString *bookmarkUUID; // @synthesize bookmarkUUID=_bookmarkUUID;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)_initWithBookmarkChangeType:(int)arg1 token:(id)arg2 bookmarkUUID:(id)arg3 bookmarkType:(long long)arg4 bookmarkSyncServerID:(id)arg5;

@end

