//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CSSearchableItem, NSArray;

@protocol SGSuggestionsServiceMessagesProtocol
@property __weak id <SGMessagesSuggestionsServiceDelegate> delegate;
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg3;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg3;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *, NSArray *))arg3;
@end

