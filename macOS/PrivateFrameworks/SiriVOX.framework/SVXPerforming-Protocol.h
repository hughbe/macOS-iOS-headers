//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@protocol SVXPerforming <NSObject>
- (void)performBlock:(void (^)(void))arg1 withOptions:(unsigned long long)arg2;
- (void)performBlock:(void (^)(void))arg1 afterDelay:(double)arg2;
- (void)performBlock:(void (^)(void))arg1;
@end

