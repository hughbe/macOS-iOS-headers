//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSearchField.h"

__attribute__((visibility("hidden")))
@interface CPKSearchField : NSSearchField
{
    CPKSearchField *_altSearchField;
    BOOL _alreadyFocused;
}

+ (Class)cellClass;
@property(retain) CPKSearchField *altSearchField; // @synthesize altSearchField=_altSearchField;
- (BOOL)becomeFirstResponder;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

