/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKAbstractWallpaper : NSObject <NAIdentifiable, WKDescribable, WKWallpaper> {
    unsigned long long  _backingType;
    long long  _identifier;
    NSString * _name;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long backingType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ descriptionBuilderBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) NADescriptionBuilder *wk_descriptionBuilder;

+ (id)na_identity;
+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)backingType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (long long)identifier;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setBackingType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)wk_descriptionBuilder;

@end
