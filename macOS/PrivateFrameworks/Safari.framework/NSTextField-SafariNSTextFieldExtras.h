//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextField.h>

@interface NSTextField (SafariNSTextFieldExtras)
+ (id)safari_labelStyledTextFieldForDFR;
+ (id)safari_labelStyledTextFieldWithFrame:(struct CGRect)arg1;
+ (id)safari_labelStyledTextField;
- (void)safari_disableDFRAccessories;
- (id)_safari_textFieldStyledAsLabel;
- (void)safari_styleAsLabel;
- (double)safari_fittingHeightWithMaximumWidth:(double)arg1 maximumNumberOfLines:(unsigned long long)arg2;
- (double)safari_heightOfDisplayedText;
- (struct CGRect)safari_boundingRectForCharacterRange:(struct _NSRange)arg1;
- (BOOL)convertCommandReturnOrEnterToNewline:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)hasNonWhitespaceCharacters;
- (void)safeSetStringValue:(id)arg1;
- (id)safeStringValue;
- (id)safeCurrentEditor;
@end

