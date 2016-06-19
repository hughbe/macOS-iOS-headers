//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/DOMProvider.h>

#import "AssociatedMessageDOMProvider.h"

@class NSMutableDictionary, NSString;

@interface StickerDOMProvider : DOMProvider <AssociatedMessageDOMProvider>
{
    NSMutableDictionary *_stickerChatItemsToUpdate;
    NSMutableDictionary *_stickerChatItemsToUpdateAfterMediaLoad;
}

@property(retain, nonatomic) NSMutableDictionary *stickerChatItemsToUpdateAfterMediaLoad; // @synthesize stickerChatItemsToUpdateAfterMediaLoad=_stickerChatItemsToUpdateAfterMediaLoad;
@property(retain, nonatomic) NSMutableDictionary *stickerChatItemsToUpdate; // @synthesize stickerChatItemsToUpdate=_stickerChatItemsToUpdate;
- (void).cxx_destruct;
- (void)_resolvePaddingHeightForChatItemElementWithIntent:(id)arg1 withStickerElement:(id)arg2;
- (void)_compareWidthsForLayoutIntents:(id)arg1 messageTextWidth:(unsigned int)arg2 maxWidthPadding:(unsigned int *)arg3 fromMe:(BOOL)arg4;
- (void)_compareHeightsForLayoutIntents:(id)arg1 chatItemHeight:(unsigned int)arg2 maxBottomMargin:(unsigned int *)arg3 maxTopMargin:(unsigned int *)arg4;
- (void)_setUpStickerElementsAndResolvePaddingHeightForChatItemElement:(id)arg1 andMessageTextElement:(id)arg2;
- (void)_compareWidthsForScalars:(id)arg1 stickerSize:(struct CGSize *)arg2 messageTextWidth:(unsigned int)arg3 maxWidthPadding:(unsigned int *)arg4 fromMe:(BOOL)arg5 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg6;
- (void)_compareHeightsForScalars:(id)arg1 stickerSize:(struct CGSize *)arg2 chatItemHeight:(unsigned int)arg3 maxBottomMargin:(unsigned int *)arg4 maxTopMargin:(unsigned int *)arg5 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor *)arg6;
- (struct CGSize)_setUpStickerElementWithScalarPositioning:(id)arg1 andStickerChatItem:(id)arg2 andParentClientSize:(struct CGSize)arg3;
- (float)_getStickerWidth:(struct CGSize *)arg1 withRadians:(float)arg2;
- (float)_getStickerHeight:(struct CGSize *)arg1 withRadians:(float)arg2;
- (id)_getStickerSpacerElement:(id)arg1;
- (BOOL)hasStickersToPlaceOnVideoElements;
- (void)videoElementLoadedForGUID:(id)arg1;
- (void)transcriptDidLayOut;
- (void)_positionStickerWithAssociatedLayoutIntent:(id)arg1 withGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg2;
- (void)_positionStickerWithLayoutIntent:(id)arg1 withGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg2;
- (void)_positionStickerWithScalar:(id)arg1 withGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg2 forImageSize:(struct CGSize)arg3 andMessageTextClientSize:(struct CGSize)arg4;
- (void)stickerFileTransferDidUpdate:(id)arg1;
- (struct CGSize)_setStickerSizeWithScalarPositioning:(id)arg1 withGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg2 andImageSize:(struct CGSize)arg3 andMessageTextClientSize:(struct CGSize)arg4;
- (void)_setStickerSizeWithLayoutIntentPositioning:(id)arg1 withGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg2 andImageSize:(struct CGSize)arg3;
- (double)_getScaleFactor:(double)arg1 withGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg2;
- (float)_getScreenScaleFactor;
- (id)_didCreateImageElementWithTransferGUID:(id)arg1 forStickerElement:(id)arg2;
- (BOOL)_getImageSizeFromMetaData:(id)arg1 forImageSize:(struct CGSize *)arg2;
- (id)_getImageMetaDataDictionary:(id)arg1;
- (void)_setSource:(id)arg1 withPath:(id)arg2;
- (void)_setRotation:(id)arg1 withRadians:(float)arg2;
- (id)_fileTransferForGUID:(id)arg1;
- (BOOL)positionSticker:(id)arg1 withChatItem:(id)arg2;
- (void)_setUpDefaultSizeForSticker:(id)arg1;
- (void)_addChatItemToUpdateQueue:(id)arg1 forElement:(id)arg2 withChatItemElement:(id)arg3;
- (void)parseAssociatedChatItem:(id)arg1 appendToElement:(id)arg2 withChatItemElement:(id)arg3;
- (id)DOM;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

