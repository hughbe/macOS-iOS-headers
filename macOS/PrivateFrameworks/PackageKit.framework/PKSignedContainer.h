//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PKArchive;

@interface PKSignedContainer : NSObject
{
    PKArchive *_archive;
    NSDictionary *_metadata;
    BOOL _performsAssessment;
    unsigned long long _options;
}

@property BOOL performsAssessmentIfNeeded; // @synthesize performsAssessmentIfNeeded=_performsAssessment;
@property unsigned long long options; // @synthesize options=_options;
- (void)cancelOperation:(id)arg1;
- (id)startUnarchivingAtPath:(id)arg1 notifyOnQueue:(id)arg2 progress:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
- (void)_startUnarchivingAtPath:(id)arg1 cancelHandler:(id)arg2 notifyOnQueue:(id)arg3 progress:(CDUnknownBlockType)arg4 finish:(CDUnknownBlockType)arg5;
@property(readonly) unsigned long long fileSystemCompressionFormat;
- (BOOL)_assessContainerReturningShouldFlagContents:(char *)arg1;
- (BOOL)_assessURL:(id)arg1 withQuarantineFlags:(unsigned int)arg2;
- (BOOL)_setAssessment:(BOOL)arg1 ofItemAtPath:(id)arg2;
- (void)dealloc;
- (id)initForReadingFromContainerAtURL:(id)arg1 error:(id *)arg2;
- (id)_initCommon;
- (id)_archive;

@end

