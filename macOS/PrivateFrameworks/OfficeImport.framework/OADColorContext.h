//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADColorMap, OADColorScheme;

__attribute__((visibility("hidden")))
@interface OADColorContext : NSObject
{
    OADColorScheme *mScheme;
    OADColorMap *mMap;
    id <OADColorPalette> mPalette;
}

+ (id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;
@property(retain, nonatomic) id <OADColorPalette> palette; // @synthesize palette=mPalette;
@property(readonly, nonatomic) OADColorMap *map; // @synthesize map=mMap;
@property(readonly, nonatomic) OADColorScheme *scheme; // @synthesize scheme=mScheme;
- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;

@end

