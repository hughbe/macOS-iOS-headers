//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSColorList, NSColorPickerSpectrumScrollerView;

@protocol NSColorPickerSpectrumScrollerViewDataSource <NSObject>
- (NSColorList *)colorListForSpectrumView:(NSColorPickerSpectrumScrollerView *)arg1;
- (long long)pageCountForSpectrumView:(NSColorPickerSpectrumScrollerView *)arg1;
- (long long)currentPageForSpectrumView:(NSColorPickerSpectrumScrollerView *)arg1;
@end

