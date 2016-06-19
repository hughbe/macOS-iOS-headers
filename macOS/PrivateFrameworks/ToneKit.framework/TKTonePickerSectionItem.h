//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ToneKit/TKPickerSectionItem.h>

#import "TKPickerContainerItem.h"

@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem>
{
    TKTonePickerController *_parentTonePickerController;
    long long _numberOfChildren;
    unsigned long long _sectionHeader;
    unsigned long long _regularToneSectionIndex;
}

@property(nonatomic, setter=_setRegularToneSectionIndex:) unsigned long long regularToneSectionIndex; // @synthesize regularToneSectionIndex=_regularToneSectionIndex;
@property(nonatomic, setter=_setSectionHeader:) unsigned long long sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

