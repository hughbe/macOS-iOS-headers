//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPPage;

@interface CPZoneFilter : NSObject
{
    CPPage *page;
    double minArea;
}

+ (void)filterZonesInPage:(id)arg1;
- (void)findUsedGraphicsInZone:(id)arg1;
- (void)findBackgroundGraphicsInZone:(id)arg1;
- (void)filterZonesInZone:(id)arg1;
- (id)initWithPage:(id)arg1;

@end

