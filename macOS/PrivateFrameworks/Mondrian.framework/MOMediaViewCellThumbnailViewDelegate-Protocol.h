//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mondrian/NSObject-Protocol.h>

@class MOMediaViewCellThumbnailView, NSString;

@protocol MOMediaViewCellThumbnailViewDelegate <NSObject>
- (BOOL)mediaViewCellThumbnailViewWantsTransparentThumbnailBackground:(MOMediaViewCellThumbnailView *)arg1;
- (struct CGColor *)thumbnailEmptyColorForMediaViewCellThumbnailView:(MOMediaViewCellThumbnailView *)arg1;
- (id)thumbnailEmptyImageForMediaViewCellThumbnailView:(MOMediaViewCellThumbnailView *)arg1;
- (NSString *)accessibilityIdentifierForMediaViewCellThumbnailView:(MOMediaViewCellThumbnailView *)arg1;
- (NSString *)accessibilityRoleDescriptionForMediaViewCellThumbnailView:(MOMediaViewCellThumbnailView *)arg1;
@end

