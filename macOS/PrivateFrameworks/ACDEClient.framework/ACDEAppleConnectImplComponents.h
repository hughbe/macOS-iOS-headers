//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDEClient/ACMAppleConnectImplComponents.h>

@interface ACDEAppleConnectImplComponents : ACMAppleConnectImplComponents
{
}

+ (id)components;
- (void)cleanupOnMemoryWarning;
- (void)unloadUIController;
- (id)createTicketVerificationRequest;
- (id)createHandlerWithClass:(Class)arg1 context:(id)arg2;
- (id)createAuthenticationRequest;
- (id)createTransport;
- (id)twoSVController;
@property(retain, nonatomic) id <ACDEUIControllerProtocol> uiController;
- (id)systemInfo;
- (id)preferences;

@end

