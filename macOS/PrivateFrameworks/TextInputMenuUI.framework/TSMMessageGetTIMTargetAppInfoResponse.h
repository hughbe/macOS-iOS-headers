//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputMenuUI/TSMMessageProtocol-Protocol.h>

@class InputSourceOwner;

@interface TSMMessageGetTIMTargetAppInfoResponse : NSObject <TSMMessageProtocol>
{
    InputSourceOwner *_inputSourceOwner;
}

@property(readonly, nonatomic) InputSourceOwner *inputSourceOwner; // @synthesize inputSourceOwner=_inputSourceOwner;
- (void)replyReceiver:(int)arg1 withInfo:(id)arg2;
- (struct __CFData *)copyMessageReceiver:(int)arg1 withInfo:(id)arg2;
- (void)dealloc;

@end

