//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGDataDetectorMatch : NSObject
{
    unsigned int _matchType;
    NSString *_valueString;
    struct _NSRange _range;
    struct _NSRange _labelRange;
    struct _NSRange _valueRange;
}

@property(readonly, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(readonly, nonatomic) struct _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property(readonly, nonatomic) struct _NSRange labelRange; // @synthesize labelRange=_labelRange;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMatchType:(unsigned int)arg1 range:(struct _NSRange)arg2 labelRange:(struct _NSRange)arg3 valueRange:(struct _NSRange)arg4 valueString:(id)arg5;

@end

