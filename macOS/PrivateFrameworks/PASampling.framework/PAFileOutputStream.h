//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/PAOutputStream.h>

@interface PAFileOutputStream : PAOutputStream
{
    struct __sFILE *_outputFileStream;
}

@property(readonly, nonatomic) struct __sFILE *outputFileStream; // @synthesize outputFileStream=_outputFileStream;
- (int)printWithFormat:(const char *)arg1;
- (id)initWithFileStream:(struct __sFILE *)arg1;

@end

