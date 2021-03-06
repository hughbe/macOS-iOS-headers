//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFColor.h>

@class NSString, WFGradient;

@interface WFColor (WorkflowPalette)
+ (id)colorWithPaletteColor:(unsigned long long)arg1;
+ (id)workflowGradientPalette;
+ (id)workflowPaletteNames;
+ (id)workflowPalette;
+ (id)colorWithP3RGBAValue:(unsigned int)arg1;
+ (id)colorWithRGBAValue:(unsigned int)arg1;
@property(readonly, nonatomic) WFGradient *paletteGradient;
@property(readonly, nonatomic) NSString *hexValue;
@property(readonly, nonatomic) unsigned int RGBAValue;
@end

