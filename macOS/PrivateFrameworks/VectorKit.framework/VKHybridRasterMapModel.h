//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKRasterMapModel.h>

__attribute__((visibility("hidden")))
@interface VKHybridRasterMapModel : VKRasterMapModel
{
    float _roadAlpha;
}

+ (float)roadAlphaForLayoutContext:(struct LayoutContext *)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(struct RenderQueue *)arg3;

@end

