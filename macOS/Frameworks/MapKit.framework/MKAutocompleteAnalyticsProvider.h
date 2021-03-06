//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKAutocompleteAnalyticsProvider-Protocol.h>
#import <MapKit/MKAutocompleteAnalyticsState-Protocol.h>

@class MKAutocompleteAnalyticsState;
@protocol OS_dispatch_queue;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKAutocompleteAnalyticsState *_currentState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKAutocompleteAnalyticsState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
- (id)captureNewMetrics;
- (void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3;
- (id)init;

@end

