//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVDelete : ISS_DAVRequest
{
}

+ (id)deleteRequestWithSession:(id)arg1 path:(id)arg2;
+ (id)deleteRequestWithURL:(id)arg1;
- (void)finalizeOperation;
- (id)dependenciesList;
- (id)initDeleteWithSession:(id)arg1 path:(id)arg2;
- (id)initDeleteWithURL:(id)arg1;

@end

