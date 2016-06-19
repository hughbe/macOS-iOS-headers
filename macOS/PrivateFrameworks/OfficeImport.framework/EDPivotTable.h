//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDPivotTable : NSObject
{
    EDResources *mResources;
    _Bool mShowLastColumn;
    _Bool mShowRowHeaders;
    _Bool mShowColumnHeaders;
    _Bool mShowRowStripes;
    _Bool mShowColumnStripes;
    _Bool mApplyNumberFormats;
    _Bool mApplyBorderFormats;
    _Bool mApplyFontFormats;
    _Bool mApplyPatternFormats;
    _Bool mApplyAlignmentFormats;
    _Bool mApplyWidthHeightFormats;
    _Bool mUseAutoFormatting;
    _Bool mColGrandTotals;
    _Bool mRowGrandTotals;
    _Bool mCustomListSort;
    _Bool mCompactData;
    _Bool mCompact;
    _Bool mDataCaption;
    _Bool mDataOnRows;
    _Bool mDisableFieldList;
    _Bool mMergeItem;
    _Bool mMultipleFieldFilters;
    _Bool mOutline;
    _Bool mOutlineData;
    _Bool mPageOverThenDown;
    _Bool mShowCalcMbrs;
    _Bool mShowDataDropDown;
    _Bool mShowDropZones;
    _Bool mShowEmptyCol;
    _Bool mShowEmptyRow;
    _Bool mShowHeaders;
    _Bool mShowMemberPropertyTips;
    _Bool mShowMissing;
    _Bool mShowMultipleLabel;
    _Bool mSubtotalHiddenItems;
    NSString *mName;
    NSString *mStyleName;
    NSString *mColumnHeaderCaption;
    NSString *mRowHeaderCaption;
    NSString *mPageStyleName;
    EDReference *mPivotTableRange;
    unsigned long long mStyleIndex;
    long long mFirstHeaderRow;
    long long mFirstDataRow;
    long long mFirstDataColumn;
    unsigned long long mRowPageCount;
    unsigned long long mColumnPageCount;
    unsigned long long mPageWrap;
    unsigned long long mAutoFormatId;
    unsigned long long mDataPosition;
    EDCollection *mRowFields;
    EDCollection *mColumnFields;
    EDCollection *mRowItems;
    EDCollection *mColumnItems;
    EDCollection *mPivotFields;
    EDCollection *mDataFields;
    EDCollection *mConditionalFields;
    EDCollection *mPivotAreas;
    EDCollection *mPageFields;
}

+ (id)pivotTableWithResources:(id)arg1;
- (id)description;
- (id)pageFields;
- (id)pivotAreas;
- (id)conditionalFormats;
- (id)dataFields;
- (id)pivotFields;
- (id)columnItems;
- (id)rowItems;
- (id)columnFields;
- (id)rowFields;
- (void)setSubtotalHiddenItems:(_Bool)arg1;
- (_Bool)subtotalHiddenItems;
- (void)setShowMultipleLabel:(_Bool)arg1;
- (_Bool)showMultipleLabel;
- (void)setShowMissing:(_Bool)arg1;
- (_Bool)showMissing;
- (void)setShowMemberPropertyTips:(_Bool)arg1;
- (_Bool)showMemberPropertyTips;
- (void)setShowHeaders:(_Bool)arg1;
- (_Bool)showHeaders;
- (void)setShowEmptyRow:(_Bool)arg1;
- (_Bool)showEmptyRow;
- (void)setShowEmptyCol:(_Bool)arg1;
- (_Bool)showEmptyCol;
- (void)setShowDropZones:(_Bool)arg1;
- (_Bool)showDropZones;
- (void)setShowDataDropDown:(_Bool)arg1;
- (_Bool)showDataDropDown;
- (void)setShowCalcMbrs:(_Bool)arg1;
- (_Bool)showCalcMbrs;
- (void)setPageOverThenDown:(_Bool)arg1;
- (_Bool)pageOverThenDown;
- (void)setOutlineData:(_Bool)arg1;
- (_Bool)outlineData;
- (void)setOutline:(_Bool)arg1;
- (_Bool)outline;
- (void)setMultipleFieldFilters:(_Bool)arg1;
- (_Bool)multipleFieldFilters;
- (void)setMergeItem:(_Bool)arg1;
- (_Bool)mergeItem;
- (void)setDisableFieldList:(_Bool)arg1;
- (_Bool)disableFieldList;
- (void)setDataOnRows:(_Bool)arg1;
- (_Bool)dataOnRows;
- (void)setDataCaption:(_Bool)arg1;
- (_Bool)dataCaption;
- (void)setCompact:(_Bool)arg1;
- (_Bool)compact;
- (void)setCompactData:(_Bool)arg1;
- (_Bool)compactData;
- (void)setCustomListSort:(_Bool)arg1;
- (_Bool)customListSort;
- (void)setRowGrandTotals:(_Bool)arg1;
- (_Bool)rowGrandTotals;
- (void)setUseAutoFormatting:(_Bool)arg1;
- (_Bool)useAutoFormatting;
- (void)setColGrandTotals:(_Bool)arg1;
- (_Bool)colGrandTotals;
- (void)setApplyWidthHeightFormats:(_Bool)arg1;
- (_Bool)applyWidthHeightFormats;
- (void)setApplyAlignmentFormats:(_Bool)arg1;
- (_Bool)applyAlignmentFormats;
- (void)setApplyPatternFormats:(_Bool)arg1;
- (_Bool)applyPatternFormats;
- (void)setApplyFontFormats:(_Bool)arg1;
- (_Bool)applyFontFormats;
- (void)setApplyBorderFormats:(_Bool)arg1;
- (_Bool)applyBorderFormats;
- (void)setApplyNumberFormats:(_Bool)arg1;
- (_Bool)applyNumberFormats;
- (void)setShowColumnHeaders:(_Bool)arg1;
- (_Bool)showColumnHeaders;
- (void)setShowRowHeaders:(_Bool)arg1;
- (_Bool)showRowHeaders;
- (void)setShowColumnStripes:(_Bool)arg1;
- (_Bool)showColumnStripes;
- (void)setShowRowStripes:(_Bool)arg1;
- (_Bool)showRowStripes;
- (void)setShowLastColumn:(_Bool)arg1;
- (_Bool)showLastColumn;
- (void)setDataPosition:(unsigned long long)arg1;
- (unsigned long long)dataPosition;
- (void)setAutoFormatId:(unsigned long long)arg1;
- (unsigned long long)autoFormatId;
- (void)setPageWrap:(unsigned long long)arg1;
- (unsigned long long)pageWrap;
- (void)setFirstDataColumn:(long long)arg1;
- (long long)firstDataColumn;
- (void)setFirstDataRow:(long long)arg1;
- (long long)firstDataRow;
- (void)setFirstHeaderRow:(long long)arg1;
- (long long)firstHeaderRow;
- (void)setColumnPageCount:(unsigned long long)arg1;
- (unsigned long long)columnPageCount;
- (void)setRowPageCount:(unsigned long long)arg1;
- (unsigned long long)rowPageCount;
- (void)setPivotTableRange:(id)arg1;
- (id)pivotTableRange;
- (void)setName:(id)arg1;
- (id)name;
- (void)setStyleName:(id)arg1;
- (id)styleName;
- (void)setPageStyleName:(id)arg1;
- (id)pageStyleName;
- (void)setRowHeaderCaption:(id)arg1;
- (id)rowHeaderCaption;
- (void)setColumnHeaderCaption:(id)arg1;
- (id)columnHeaderCaption;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (unsigned long long)styleIndex;

@end

