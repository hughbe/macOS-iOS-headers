//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MarkupUI/NSObject-Protocol.h>

@class NSString, NSURL, PDFActionRemoteGoTo, PDFView;

@protocol PDFViewDelegate <NSObject>

@optional
- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (void)PDFViewPerformPrint:(PDFView *)arg1;
- (NSString *)PDFViewPrintJobTitle:(PDFView *)arg1;
- (double)PDFViewWillChangeScaleFactor:(PDFView *)arg1 toScale:(double)arg2;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;
@end

