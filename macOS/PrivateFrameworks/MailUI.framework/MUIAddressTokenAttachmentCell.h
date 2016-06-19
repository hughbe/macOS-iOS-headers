//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenAttachmentCell.h"

@class NSColor;

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _displayAsExternal;
    BOOL _neverShowSeparator;
    NSColor *_foregroundColor;
}

+ (id)colorForExternalDomain;
@property(nonatomic) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property BOOL neverShowSeparator; // @synthesize neverShowSeparator=_neverShowSeparator;
@property(nonatomic) BOOL displayAsExternal; // @synthesize displayAsExternal=_displayAsExternal;
- (id)_textAttributes;
- (BOOL)_finalizeStyleTextOptions:(id)arg1;
- (id)tokenTintColor;

@end

