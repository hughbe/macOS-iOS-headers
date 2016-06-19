//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject
{
    BOOL _useCellular;
    BOOL _powerRequired;
    double _bitRate;
    NSString *_videoType;
    unsigned long long _mediaAssetType;
}

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long mediaAssetType; // @synthesize mediaAssetType=_mediaAssetType;
@property(readonly, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) double bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, nonatomic) BOOL powerRequired; // @synthesize powerRequired=_powerRequired;
@property(readonly, nonatomic) BOOL useCellular; // @synthesize useCellular=_useCellular;
- (id)initWithDictionary:(id)arg1;

@end

