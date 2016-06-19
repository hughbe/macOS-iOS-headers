//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying>
{
    struct GEOPDCameraPathFrame *_cameraPaths;
    unsigned long long _cameraPathsCount;
    unsigned long long _cameraPathsSpace;
    struct GEOPDLabelFrame *_labelFrames;
    unsigned long long _labelFramesCount;
    unsigned long long _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    BOOL _useSplines;
    struct {
        unsigned int useSplines:1;
    } _has;
}

+ (Class)notificationMessageType;
+ (Class)labelType;
+ (id)flyoverForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *notificationMessages; // @synthesize notificationMessages=_notificationMessages;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(nonatomic) BOOL useSplines; // @synthesize useSplines=_useSplines;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)notificationMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationMessagesCount;
- (void)addNotificationMessage:(id)arg1;
- (void)clearNotificationMessages;
- (id)labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (void)addLabel:(id)arg1;
- (void)clearLabels;
- (void)setLabelFrames:(struct GEOPDLabelFrame *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLabelFrame)labelFrameAtIndex:(unsigned long long)arg1;
- (void)addLabelFrame:(struct GEOPDLabelFrame)arg1;
- (void)clearLabelFrames;
@property(readonly, nonatomic) struct GEOPDLabelFrame *labelFrames;
@property(readonly, nonatomic) unsigned long long labelFramesCount;
@property(nonatomic) BOOL hasUseSplines;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDCameraPathFrame)cameraPathAtIndex:(unsigned long long)arg1;
- (void)addCameraPath:(struct GEOPDCameraPathFrame)arg1;
- (void)clearCameraPaths;
@property(readonly, nonatomic) struct GEOPDCameraPathFrame *cameraPaths;
@property(readonly, nonatomic) unsigned long long cameraPathsCount;
- (void)dealloc;
- (id)bestLocalizedAnnouncementMessage;
- (id)bestLocalizedLabelAtIndex:(unsigned long long)arg1;

@end

