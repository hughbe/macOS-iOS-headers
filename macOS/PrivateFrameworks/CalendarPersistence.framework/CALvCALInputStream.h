//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CALvCALInputStream : NSObject
{
    struct _NSRange _buffer;
    int _discard_buffer;
    unsigned int _seek;
    int _current_line_num;
    NSData *_dataStream;
}

- (int)load_line_buffer;
- (id)errorStr:(int)arg1;
- (int)lineNum;
- (BOOL)isContinued;
- (int)getLine:(char *)arg1 withSize:(unsigned long long *)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

