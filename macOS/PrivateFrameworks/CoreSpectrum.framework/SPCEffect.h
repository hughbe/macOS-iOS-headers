//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class NSArray, SPCExpression;

@interface SPCEffect : SPCObject
{
    SPCExpression *_opacityExpression;
    SPCExpression *_blendModeExpression;
    NSArray *_effectProperties;
}

@property(copy) NSArray *effectProperties; // @synthesize effectProperties=_effectProperties;
@property(retain, nonatomic) SPCExpression *blendModeExpression; // @synthesize blendModeExpression=_blendModeExpression;
@property(retain, nonatomic) SPCExpression *opacityExpression; // @synthesize opacityExpression=_opacityExpression;
- (id)logicalPathToEnvironment;
- (id)defaultLogicalPathCollectionName;
@property(readonly) NSArray *propertyDescriptors;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

