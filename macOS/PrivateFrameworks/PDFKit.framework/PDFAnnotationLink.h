//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying>
{
    PDFAnnotationLinkPrivateVars *_private2;
}

- (void).cxx_destruct;
- (void)setMouseDownStyle:(id)arg1;
- (id)mouseDownStyle;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

