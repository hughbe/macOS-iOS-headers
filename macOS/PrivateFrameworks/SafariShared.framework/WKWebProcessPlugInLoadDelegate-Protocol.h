//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURL, NSURLRequest, NSURLResponse, WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@protocol WKWebProcessPlugInLoadDelegate <NSObject>

@optional
- (NSString *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 userAgentForURL:(NSURL *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didFailLoadForResource:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didFinishLoadForResource:(unsigned long long)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(NSURLRequest *)arg4;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(NSURLRequest *)arg4 pageIsProvisionallyLoading:(BOOL)arg5;
- (NSURLRequest *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 willSendRequest:(NSURLRequest *)arg3 redirectResponse:(NSURLResponse *)arg4;
- (NSURLRequest *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(NSURLRequest *)arg4 redirectResponse:(NSURLResponse *)arg5;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFirstVisuallyNonEmptyLayoutForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didLayoutForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didHandleOnloadEventsForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didRemoveFrameFromHierarchy:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 globalObjectIsAvailableForFrame:(WKWebProcessPlugInFrame *)arg2 inScriptWorld:(WKWebProcessPlugInScriptWorld *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(WKWebProcessPlugInFrame *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFinishLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFailLoadWithErrorForFrame:(WKWebProcessPlugInFrame *)arg2 error:(NSError *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFailProvisionalLoadWithErrorForFrame:(WKWebProcessPlugInFrame *)arg2 error:(NSError *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFinishDocumentLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didCommitLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didStartProvisionalLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
@end

