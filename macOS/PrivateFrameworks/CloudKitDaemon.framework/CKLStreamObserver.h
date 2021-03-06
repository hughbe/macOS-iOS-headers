//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKLEventFilter, NSDateFormatter, NSMutableDictionary, NSString;

@interface CKLStreamObserver : NSObject
{
    BOOL _colorOutput;
    CKLEventFilter *_filter;
    NSDateFormatter *_formatter;
    NSMutableDictionary *_processNamesByPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *processNamesByPath; // @synthesize processNamesByPath=_processNamesByPath;
@property(readonly, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) CKLEventFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) BOOL colorOutput; // @synthesize colorOutput=_colorOutput;
- (void)finish;
- (void)eventMatched:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)_processNameForPath:(id)arg1;
@property(retain, nonatomic) NSString *processName;
@property(nonatomic) BOOL simulatorOnly;
- (id)initWithLogTypes:(unsigned long long)arg1;

@end

