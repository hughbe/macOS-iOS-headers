//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOServerFormattedString.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOServerFormattedString : NSObject <GEOServerFormattedString>
{
    NSString *_formatString;
}

@property(readonly, nonatomic) NSString *formatString;
@property(readonly, nonatomic) NSArray *separators;
@property(readonly, nonatomic) NSArray *formatTokens;
@property(readonly, nonatomic) NSArray *formatStrings;
- (void)dealloc;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

