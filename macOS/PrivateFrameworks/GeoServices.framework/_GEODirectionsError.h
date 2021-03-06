//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODirectionsError.h"

@class GEOAlert, NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsError : NSObject <GEODirectionsError>
{
    GEOAlert *_alert;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
}

- (BOOL)hasError:(long long)arg1;
- (BOOL)_errorCode:(long long)arg1 toProblem:(out int *)arg2;
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail)arg1;
@property(readonly, nonatomic) long long firstDirectionsErrorCode;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)description;
- (void)dealloc;
- (id)initWithWaypointIndex:(unsigned long long)arg1;
- (id)initWithResponse:(id)arg1;
- (void)_copyProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;

@end

