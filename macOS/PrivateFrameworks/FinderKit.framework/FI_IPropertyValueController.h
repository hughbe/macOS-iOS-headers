//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_IPropertyValueExtractor, FI_TLayoutBinder, NSObject;

__attribute__((visibility("hidden")))
@interface FI_IPropertyValueController : FI_TViewController
{
    struct TNSRef<NSObject *, void> _value;
    struct TNSRef<FI_TLayoutBinder *, void> _layoutBinder;
    double _viewHeight;
    struct TNSRef<FI_IPropertyValueExtractor *, void> _valueExtractor;
    _Bool _shouldBeVisible;
    _Bool _shouldBeEnabled;
}

+ (id)propertyValueControllerWithValueExtractor:(id)arg1;
+ (id)propertyValueController;
@property(nonatomic) _Bool shouldBeEnabled; // @synthesize shouldBeEnabled=_shouldBeEnabled;
@property(nonatomic) _Bool shouldBeVisible; // @synthesize shouldBeVisible=_shouldBeVisible;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleNodeMDAttributesChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)handleNodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)handleBulkNodesDeleted:(const struct TCoalescedNodesAddedMap *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (void)handleBulkNodesChanged:(const struct TCoalescedNodesChangedMap *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (_Bool)adjustSize:(_Bool)arg1;
- (_Bool)canModifyNodes:(const struct TFENodeVector *)arg1;
- (void)flush;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
@property(retain, nonatomic) FI_IPropertyValueExtractor *valueExtractor; // @dynamic valueExtractor;
@property(readonly, retain, nonatomic) FI_TLayoutBinder *layoutBinder; // @dynamic layoutBinder;
- (void)setView:(id)arg1;
@property(retain, nonatomic) NSObject *value; // @dynamic value;
- (id)defaultValue;
- (void)aboutToTearDown;
- (void)initCommon;
- (id)initWithValueExtractor:(id)arg1;

@end

