//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PRSFeature : NSObject
{
    NSString *_featureName;
    NSString *_type;
    NSString *_featureValue;
}

@property(retain) NSString *featureValue; // @synthesize featureValue=_featureValue;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)kindOfObject:(id)arg1;
- (id)init;

@end

