//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/KHThemePreviewInfoProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface KHThemePreviewDefaultInfo : NSObject <KHThemePreviewInfoProtocol>
{
    NSDictionary *_defaultCoverLayout;
    NSArray *_defaultPagesTreatments;
    NSDictionary *_defaultMasterIdentifiersByUsage;
}

+ (id)infoKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *defaultMasterIdentifiersByUsage; // @synthesize defaultMasterIdentifiersByUsage=_defaultMasterIdentifiersByUsage;
@property(retain, nonatomic) NSArray *defaultPagesTreatments; // @synthesize defaultPagesTreatments=_defaultPagesTreatments;
@property(retain, nonatomic) NSDictionary *defaultCoverLayout; // @synthesize defaultCoverLayout=_defaultCoverLayout;
- (id)initFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

