//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate, NSString, QTTrack;

@protocol QTTrackAttributes
- (void)setScaledBounds:(struct CGRect)arg1;
- (struct CGRect)scaledBounds;
- (NSString *)mediaSubType;
- (NSString *)mediaTypeInMedia;
- (void)setCanDRMInteractWithUser:(BOOL)arg1;
- (BOOL)canDRMInteractWithUser;
- (BOOL)isDRMAuthorized;
- (BOOL)isDRMProtected;
- (void)setSourcePosition:(struct CGPoint)arg1;
- (struct CGPoint)sourcePosition;
- (void)setSourceDimensions:(struct CGSize)arg1;
- (struct CGSize)sourceDimensions;
- (void)setBalance:(float)arg1;
- (float)balance;
- (void)setTransferMode:(long long)arg1;
- (long long)transferMode;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setOperationColor:(struct RGBColor)arg1;
- (struct RGBColor)operationColor;
- (void)setMask:(id)arg1;
- (id)mask;
- (void)setLanguage:(long long)arg1;
- (long long)language;
- (void)setHref:(NSString *)arg1;
- (NSString *)href;
- (void)setMatrix:(struct MatrixRecord)arg1;
- (struct MatrixRecord)matrix;
- (void)setChapterlist:(QTTrack *)arg1;
- (QTTrack *)chapterlist;
- (void)setNeverPurgeHint:(BOOL)arg1;
- (BOOL)neverPurgeHint;
- (void)setPreloadRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)preloadRange;
- (void)setPreloadHint:(BOOL)arg1;
- (BOOL)preloadHint;
- (void)setSingleFieldVideo:(BOOL)arg1;
- (BOOL)singleFieldVideo;
- (void)setDeinterlaceVideo:(BOOL)arg1;
- (BOOL)deinterlaceVideo;
- (void)setHighQualityVideo:(BOOL)arg1;
- (BOOL)highQualityVideo;
- (void)setMuted:(BOOL)arg1;
- (BOOL)muted;
- (void)setTreble:(float)arg1;
- (float)treble;
- (void)setBass:(float)arg1;
- (float)bass;
- (void)setGain:(float)arg1;
- (float)gain;
- (BOOL)isVisual;
- (BOOL)hasAudio;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setUsageInPreview:(BOOL)arg1;
- (BOOL)usageInPreview;
- (void)setUsageInPoster:(BOOL)arg1;
- (BOOL)usageInPoster;
- (void)setUsageInMovie:(BOOL)arg1;
- (BOOL)usageInMovie;
- (long long)timeScale;
- (void)setRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)range;
- (NSDate *)modificationTime;
- (NSString *)mediaType;
- (void)setLayer:(short)arg1;
- (short)layer;
- (int)trackID;
- (BOOL)hasApertureModeDimensions;
- (BOOL)isChapterTrack;
- (NSString *)formatSummary;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setDisplayName:(NSString *)arg1;
- (NSString *)displayName;
- (void)setDimensions:(struct CGSize)arg1;
- (struct CGSize)dimensions;
- (NSDate *)creationTime;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
@end

