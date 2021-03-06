/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVideoAnnotator : HMFObject <HMFLogging> {
    struct CGColorSpace { } * _colorSpace;
    struct CGContext { } * _context;
    struct __CTFont { } * _font;
    struct opaqueCMSampleBuffer { } * _sbuf;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (const struct __CTFont { }*)_createFontWithSize:(double)arg1;
- (void)dealloc;
- (void)draw:(id /* block */)arg1;
- (void)drawPolygonWithNormalizedPoints:(id)arg1;
- (void)drawTextHeaderBar:(id)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
