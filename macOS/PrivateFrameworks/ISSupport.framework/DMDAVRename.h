//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface DMDAVRename : ISS_DAVRequest
{
}

+ (id)renameRequestWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 sourceToken:(id)arg4 destinationToken:(id)arg5;
- (void)finalizeOperation;
- (id)initRenameWithSession:(id)arg1 sourceURI:(id)arg2 destinationURI:(id)arg3 sourceToken:(id)arg4 destinationToken:(id)arg5;

@end

