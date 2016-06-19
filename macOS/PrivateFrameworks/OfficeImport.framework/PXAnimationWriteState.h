//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OCXWriteState, TCXmlPrefixStreamWriter;

__attribute__((visibility("hidden")))
@interface PXAnimationWriteState : NSObject
{
    unsigned long long mCommonTimeNodeDataId;
    OCXWriteState *mWriteState;
    TCXmlPrefixStreamWriter *mFile;
    BOOL mHasMainSeqTimeNodeId;
    unsigned long long mMainSeqTimeNodeId;
    OCXWriteState *_writeState;
    TCXmlPrefixStreamWriter *_file;
}

@property(retain, nonatomic) TCXmlPrefixStreamWriter *file; // @synthesize file=_file;
@property(retain, nonatomic) OCXWriteState *writeState; // @synthesize writeState=_writeState;
- (unsigned long long)mainSeqTimeNodeId;
- (void)setMainSeqTimeNodeId:(unsigned long long)arg1;
- (BOOL)hasMainSeqTimeNodeId;
- (unsigned long long)newCommonTimeNodeDataId;
- (void)dealloc;
- (id)initWithWriteState:(id)arg1 file:(id)arg2;

@end

