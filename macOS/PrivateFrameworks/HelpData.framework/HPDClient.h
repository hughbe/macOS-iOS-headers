//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface HPDClient : NSObject
{
    struct __CFMessagePort *_serverPortRef;
}

- (void)abort;
- (BOOL)stop;
- (BOOL)collect;
- (BOOL)cancelQuery:(id)arg1;
- (BOOL)performQuery:(id)arg1 withDelegate:(id)arg2;
@property(readonly, copy) NSArray *preferredLocalizations;
@property(readonly, copy) NSDictionary *bookList;
- (BOOL)registerBookWithIdentifier:(id)arg1 appBundle:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4;
- (id)bookWithIdentifier:(id)arg1;
- (id)sendMessage:(int)arg1 withData:(void *)arg2 withReply:(BOOL)arg3;
- (struct __CFMessagePort *)createLocalPortWithDelegate:(id)arg1;
@property(readonly) BOOL createServerPortIfNeeded;
- (void)dealloc;

@end

