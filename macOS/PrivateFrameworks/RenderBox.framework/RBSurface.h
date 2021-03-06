//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RBDisplayList;

@interface RBSurface : NSObject
{
    struct objc_ptr<RBDisplayList *> _displayList;
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>> _drawable;
    struct objc_ptr<id<MTLDevice>> _device;
    struct refcounted_ptr<RB::Texture> _texture;
    void *_lastItem;
    struct Bounds _dirty;
    BOOL _clearsBackground;
    BOOL _opaque;
    int _colorMode;
    struct CGSize _size;
    CDStruct_0b1c536a _clearColor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
@property(nonatomic) CDStruct_0b1c536a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) BOOL clearsBackground; // @synthesize clearsBackground=_clearsBackground;
@property(nonatomic) int colorMode; // @synthesize colorMode=_colorMode;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)_updateWithDevice:(struct Device *)arg1 frame:(struct RenderFrame *)arg2 synchronized:(BOOL)arg3;
- (void)invalidateInRect:(struct Rect)arg1;
- (void)invalidate;
- (void)updateUsingDevice:(id)arg1;
- (struct CGImage *)copyCGImageUsingDevice:(id)arg1;
- (void)setDisplayList:(id)arg1 dirtyRect:(struct CGRect)arg2;
@property(retain, nonatomic) RBDisplayList *displayList;
- (id)init;

@end

