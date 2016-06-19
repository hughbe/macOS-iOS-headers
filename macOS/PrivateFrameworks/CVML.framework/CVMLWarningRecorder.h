//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CVMLWarningRecorder.h"

@class NSMutableDictionary, NSString;

@interface CVMLWarningRecorder : NSObject <CVMLWarningRecorder>
{
    NSMutableDictionary *_warnings;
}

- (void).cxx_destruct;
- (BOOL)hasWarnings;
- (id)warnings;
- (id)valueForWarning:(id)arg1;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

