//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDSharePCSData, CKRecordID;

__attribute__((visibility("hidden")))
@interface CKDeleteShareInfo : NSObject
{
    CKRecordID *_shareID;
    CKDSharePCSData *_pcsData;
}

@property(retain, nonatomic) CKDSharePCSData *pcsData; // @synthesize pcsData=_pcsData;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;

@end

