//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecCardSection.h>

@class NSArray, NSString, WBSParsecTableAlignmentSchema;

@interface WBSParsecTableRowCardSection : WBSParsecCardSection
{
    BOOL _hideDivider;
    NSString *_tableID;
    WBSParsecTableAlignmentSchema *_alignmentSchema;
    long long _rowType;
    NSArray *_values;
}

+ (id)_specializedCardSectionSchema;
@property(readonly, nonatomic) BOOL hideDivider; // @synthesize hideDivider=_hideDivider;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) long long rowType; // @synthesize rowType=_rowType;
@property(readonly, nonatomic) WBSParsecTableAlignmentSchema *alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(readonly, copy, nonatomic) NSString *tableID; // @synthesize tableID=_tableID;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end

