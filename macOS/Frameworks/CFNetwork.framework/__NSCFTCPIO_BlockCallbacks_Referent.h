//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject
{
    struct TCPIO_BlockCallbacks_Listener *_readListener;
    struct TCPIO_BlockCallbacks_Listener *_writeListener;
}

- (BOOL)withListeners:(CDUnknownBlockType)arg1;
- (void)setWriteListener:(struct TCPIO_BlockCallbacks_Listener *)arg1;
- (void)setReadListener:(struct TCPIO_BlockCallbacks_Listener *)arg1;
- (void)dealloc;
- (id)init;

@end

