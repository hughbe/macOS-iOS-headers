//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionView.h>

@class NSTrackingArea;
@protocol KHTreatmentCollectionDelegate;

@interface KHTreatmentCollectionView : UXCollectionView
{
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void)mouseExited:(id)arg1;
- (void)updateTrackingAreas;

// Remaining properties
@property(nonatomic) __weak id <KHTreatmentCollectionDelegate> delegate; // @dynamic delegate;

@end

