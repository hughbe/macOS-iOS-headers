//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSNumber, NSString, RDAdjustmentDataTable;

@interface RDAdjustmentDataModel : RDModel
{
}

+ (Class)tableClass;
@property(copy, nonatomic) NSNumber *naturalDuration;
@property(nonatomic) long long editSource;
@property(nonatomic) long long orientation;
@property(copy, nonatomic) NSString *fingerprint;
@property(copy, nonatomic) NSString *formatVersion;
@property(copy, nonatomic) NSString *format;
@property(copy, nonatomic) NSString *originator;
@property(copy, nonatomic) NSData *data;
@property(nonatomic) long long versionId;
@property(readonly, nonatomic) RDAdjustmentDataTable *table;

@end

