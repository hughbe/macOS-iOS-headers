//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NFNote.h>

@class NFEWSFolder, NSString;

@interface NFEWSNote : NFNote
{
}

+ (BOOL)supportsAttachments;
+ (id)createNoteWithItemIdString:(id)arg1 context:(id)arg2;
+ (id)noteWithTitle:(id)arg1 hash:(id)arg2 context:(id)arg3;
+ (id)notesWithItemIdStrings:(id)arg1 context:(id)arg2;
- (id)_simplifiedStringFromString:(id)arg1 isXML:(BOOL)arg2;
- (id)_sha1Hash:(id)arg1;
- (BOOL)bodyMatchesHash:(id)arg1;
- (id)_calculateHashForNoteBody;
- (id)activityDictionary;
- (id)createAttachmentWithName:(id)arg1;
- (BOOL)isRemote;
- (BOOL)validateFolder:(inout id *)arg1 error:(out id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *changeKey; // @dynamic changeKey;
@property(retain, nonatomic) NFEWSFolder *folder; // @dynamic folder;

@end

