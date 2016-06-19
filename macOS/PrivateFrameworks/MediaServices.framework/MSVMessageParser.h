//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface MSVMessageParser : NSObject
{
    id <MSVMessageParserDelegate> _delegate;
    NSMutableData *_unhandledPartialObjectData;
    long long _unhandledObjectDataExpectedLength;
}

+ (id)createHeader:(unsigned long long)arg1;
@property(nonatomic) long long unhandledObjectDataExpectedLength; // @synthesize unhandledObjectDataExpectedLength=_unhandledObjectDataExpectedLength;
@property(retain, nonatomic) NSMutableData *unhandledPartialObjectData; // @synthesize unhandledPartialObjectData=_unhandledPartialObjectData;
@property(nonatomic) __weak id <MSVMessageParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegate:(id)arg1;
- (void)processData:(id)arg1;

@end

