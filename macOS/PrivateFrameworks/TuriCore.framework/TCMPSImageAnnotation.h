//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TuriCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TCMPSImageAnnotation : NSObject <NSCopying>
{
    long long _identifier;
    double _confidence;
    struct CGRect _boundingBox;
}

@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

