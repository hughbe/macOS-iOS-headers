//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNAutocompleteProbe.h"

@protocol CNAutocompleteUsageMonitorProbe <CNAutocompleteProbe>
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordDuetReturnedResults:(BOOL)arg1;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
- (void)recordUserSelectedIndex:(unsigned long long)arg1;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
- (void)recordUserSawPredictions;
@end

