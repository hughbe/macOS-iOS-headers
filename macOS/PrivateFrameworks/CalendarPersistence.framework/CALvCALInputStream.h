//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface CALvCALInputStream : NSObject
{
    struct _NSRange _buffer;
    int _discard_buffer;
    unsigned int _seek;
    int _current_line_num;
    NSData *_dataStream;
}

- (void).cxx_destruct;
- (int)load_line_buffer;
- (id)errorStr:(int)arg1;
- (int)lineNum;
- (BOOL)isContinued;
- (int)getLine:(char *)arg1 withSize:(unsigned long long *)arg2;
- (id)initWithData:(id)arg1;
- (id)init;

@end

