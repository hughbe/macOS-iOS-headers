//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNVCardSerializationStorage.h"

@class NSMutableData, NSString;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableData *_data;
}

+ (id)storageWithData:(id)arg1;
- (void).cxx_destruct;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (unsigned long long)currentLength;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

