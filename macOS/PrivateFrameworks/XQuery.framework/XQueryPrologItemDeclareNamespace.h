//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XQueryPrologItemBehavior.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemDeclareNamespace : NSObject <XQueryPrologItemBehavior>
{
    NSString *namespaceString;
    NSString *prefix;
    long long line;
}

+ (id)declareNamespace:(id)arg1 forPrefix:(id)arg2 atLine:(long long)arg3;
- (void)finalize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)XQueryUpdateProlog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

