//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ISSupport/ISS_DMDAVPropertiesRequest.h>

@interface ISS_DMDAVPropFind : ISS_DMDAVPropertiesRequest
{
    BOOL _includeParent;
    BOOL _returnDictionary;
}

+ (id)propFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 includingParent:(BOOL)arg5;
- (void)finalizeOperation;
- (void)setResultsReturnedInDictionary:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 includingParent:(BOOL)arg5;

@end

