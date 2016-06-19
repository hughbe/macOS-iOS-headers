//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSThread;

@interface CPLEngineStoreTransaction : NSObject
{
    NSThread *_currentThread;
    BOOL _forWrite;
    NSError *_error;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canRead;
- (BOOL)canWrite;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (BOOL)do:(CDUnknownBlockType)arg1;
- (BOOL)_forWrite;
- (id)initForWrite:(BOOL)arg1;

@end

