//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKPresenceDetectOperation.h>

@protocol BKFaceDetectOperationDelegate;

@interface BKFaceDetectOperation : BKPresenceDetectOperation
{
    BOOL _highPriority;
    long long _mode;
    double _timeout;
}

@property(nonatomic) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

// Remaining properties
@property(nonatomic) __weak id <BKFaceDetectOperationDelegate> delegate; // @dynamic delegate;

@end

