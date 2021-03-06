//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ICTextStyle : NSObject
{
    unsigned int _ttStyle;
    NSDictionary *_attributes;
    NSString *_name;
}

+ (BOOL)autoListInsertionEnabled;
+ (void)setAutoListInsertionEnabled:(BOOL)arg1;
+ (id)titleForNamedStyle:(unsigned int)arg1;
+ (void)setNoteDefaultNamedStyle:(unsigned int)arg1;
+ (unsigned int)noteDefaultNamedStyle;
+ (unsigned int)validatedNamedStyle:(unsigned int)arg1;
+ (id)defaultTextStyles;
@property unsigned int ttStyle; // @synthesize ttStyle=_ttStyle;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *icaxStyleDescription;

@end

