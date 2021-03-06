//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask
{
    id _appSpecificDataItemResult;
    BOOL _forceNoCache;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL forceNoCache; // @synthesize forceNoCache=_forceNoCache;
@property(retain, nonatomic) id appSpecificDataItemResult; // @synthesize appSpecificDataItemResult=_appSpecificDataItemResult;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)description;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end

