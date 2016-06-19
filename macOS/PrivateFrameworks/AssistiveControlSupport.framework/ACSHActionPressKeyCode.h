//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionPressKeyCode : ACSHAction
{
    unsigned long long _macKeyCode;
    unsigned long long _usbKeyCode;
    BOOL _usesMacKeyCode;
    long long _keyboardHWType;
    unsigned long long _modifiers;
}

+ (id)actionWithUSBKeyCode:(unsigned long long)arg1 keyboardHWType:(long long)arg2 modifiers:(unsigned long long)arg3;
+ (id)actionWithMacKeyCode:(unsigned long long)arg1 keyboardHWType:(long long)arg2 modifiers:(unsigned long long)arg3;
@property(nonatomic) unsigned long long modifiers; // @synthesize modifiers=_modifiers;
@property(nonatomic) long long keyboardHWType; // @synthesize keyboardHWType=_keyboardHWType;
@property(nonatomic) BOOL usesMacKeyCode; // @synthesize usesMacKeyCode=_usesMacKeyCode;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)repeatEnded;
- (void)perform;
@property(nonatomic) unsigned long long macKeyCode; // @synthesize macKeyCode=_macKeyCode;
@property(nonatomic) unsigned long long usbKeyCode; // @synthesize usbKeyCode=_usbKeyCode;
- (id)displayString;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)init;

@end

