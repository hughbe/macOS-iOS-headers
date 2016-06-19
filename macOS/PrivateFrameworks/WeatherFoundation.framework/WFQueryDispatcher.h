//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WFQueryDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queriesPendingResponse;
}

@property(retain, nonatomic) NSMutableDictionary *queriesPendingResponse; // @synthesize queriesPendingResponse=_queriesPendingResponse;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(CDUnknownBlockType)arg2;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)removePendingQuery:(id)arg1;
- (void)dispatchQuery:(id)arg1;
- (id)init;

@end

