//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURL;

@interface CalFTPOperation : NSObject
{
    NSURL *_url;
    NSString *_user;
    NSString *_password;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    BOOL _isCancelled;
    BOOL _isFinished;
}

@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3;
- (id)init;

@end

