//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WKNavigationDelegate-Protocol.h>
#import <Safari/WKUIDelegatePrivate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SnippetEditorDelegate : NSObject <WKNavigationDelegate, WKUIDelegatePrivate>
{
}

- (void)_webView:(id)arg1 getContextMenuFromProposedMenu:(id)arg2 forElement:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

