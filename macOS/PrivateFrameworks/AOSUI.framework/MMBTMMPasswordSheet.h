//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMAuthenticatingPasswordSheet, NSError;

@interface MMBTMMPasswordSheet : NSObject
{
    id <BTMMPasswordSheetDelegate> _delegate;
    MMAuthenticatingPasswordSheet *_authenticatingPasswordSheet;
}

@property(retain) MMAuthenticatingPasswordSheet *authenticatingPasswordSheet; // @synthesize authenticatingPasswordSheet=_authenticatingPasswordSheet;
@property id <BTMMPasswordSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showPasswordSheetUsingWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showPasswordSheetUsingWindow:(id)arg1;
@property(readonly) NSError *authenticationError; // @dynamic authenticationError;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 delegate:(id)arg2;

@end

