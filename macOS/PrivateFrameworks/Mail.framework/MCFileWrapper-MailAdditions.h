//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCFileWrapper.h>

@interface MCFileWrapper (MailAdditions)
- (void)setPreferredFilename:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)sharedKeySetForQuarantineProperties;
- (void)configureWithMessage:(id)arg1 headers:(id)arg2;
@property(nonatomic) long long attachmentMailboxType;
@end

