//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKIconAtlas.h>

@class VKResourceManager;

__attribute__((visibility("hidden")))
@interface _VKLocalIconAtlas : VKIconAtlas
{
    VKResourceManager *_resourceManager;
}

- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longValue:(unsigned long long)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 value:(unsigned int)arg2 style:(struct VKIconStyleInfo *)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(double)arg2 size:(long long)arg3;
- (void)dealloc;
- (id)initWithResourceManager:(id)arg1;

@end

