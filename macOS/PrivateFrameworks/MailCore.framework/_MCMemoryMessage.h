//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCMessage.h>

@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage
{
    MCMemoryDataSource *_dataSource;
}

- (void).cxx_destruct;
- (BOOL)isCompacted;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)primitiveDataSource;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (id)initWithStore:(id)arg1;

@end

