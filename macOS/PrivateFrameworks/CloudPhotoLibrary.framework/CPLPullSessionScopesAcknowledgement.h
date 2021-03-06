//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate
{
    CPLChangeBatch *_scopesChangeBatch;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CPLChangeBatch *scopesChangeBatch; // @synthesize scopesChangeBatch=_scopesChangeBatch;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (BOOL)discardFromStore:(id)arg1 error:(id *)arg2;
- (BOOL)applyToStore:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 scopesChangeBatch:(id)arg2;

@end

