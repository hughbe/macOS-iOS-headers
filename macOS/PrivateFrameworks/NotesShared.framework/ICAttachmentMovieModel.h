//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentMovieModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void)updateFileBasedAttributes;
- (void)updateAttachmentSize;
- (void)generatePreviews;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;

@end

