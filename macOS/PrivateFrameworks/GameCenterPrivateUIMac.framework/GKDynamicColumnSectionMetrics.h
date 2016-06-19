//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKSectionMetrics.h>

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics
{
    unsigned long long _columnsInPortrait;
    unsigned long long _columnsInLandscape;
}

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(int)arg3;
@property(nonatomic) unsigned long long columnsInLandscape; // @synthesize columnsInLandscape=_columnsInLandscape;
@property(nonatomic) unsigned long long columnsInPortrait; // @synthesize columnsInPortrait=_columnsInPortrait;
- (void)updateColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;
- (struct CGSize)itemSizeForCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdiom:(int)arg1;

@end

