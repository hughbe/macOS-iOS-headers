//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileWrapper.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface MCFileWrapper : NSFileWrapper
{
    BOOL _isRemoteAttachment;
    NSString *_contentID;
    NSString *_mailSpecialHandlingType;
    NSString *_mimeType;
    NSDictionary *_quarantineProperties;
    NSArray *_whereFroms;
    NSDate *_dateSent;
    NSDate *_dateReceived;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSArray *_recipientNames;
    NSArray *_recipientEmailAddress;
    NSString *_messageID;
    NSString *_savedPath;
    unsigned long long _imageBytes;
    NSURL *_primitiveEmptyAttachment;
    struct CGSize _imageSize;
}

+ (id)uniquedPathForFile:(id)arg1 inDirectory:(id)arg2;
@property(retain, nonatomic) NSURL *primitiveEmptyAttachment; // @synthesize primitiveEmptyAttachment=_primitiveEmptyAttachment;
@property(nonatomic) unsigned long long imageBytes; // @synthesize imageBytes=_imageBytes;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *savedPath; // @synthesize savedPath=_savedPath;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) BOOL isRemoteAttachment; // @synthesize isRemoteAttachment=_isRemoteAttachment;
@property(copy, nonatomic) NSArray *recipientEmailAddress; // @synthesize recipientEmailAddress=_recipientEmailAddress;
@property(copy, nonatomic) NSArray *recipientNames; // @synthesize recipientNames=_recipientNames;
@property(copy, nonatomic) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy, nonatomic) NSArray *whereFroms; // @synthesize whereFroms=_whereFroms;
@property(copy, nonatomic) NSDictionary *quarantineProperties; // @synthesize quarantineProperties=_quarantineProperties;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *mailSpecialHandlingType; // @synthesize mailSpecialHandlingType=_mailSpecialHandlingType;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long approximateSize;
@property(readonly, nonatomic) BOOL isALargeAttachment;
@property(readonly, nonatomic) BOOL isPlaceholder;
- (void)_isImageFile:(char *)arg1 isPDF:(char *)arg2 bestMimeType:(id *)arg3;
- (void)isImageFile:(char *)arg1 isPDF:(char *)arg2;
@property(readonly, nonatomic) BOOL isImageFile;
@property(readonly, copy, nonatomic) NSString *bestMimeType;
@property(readonly, nonatomic) BOOL isRemotelyAccessed;
- (void)removeEmptyAttachment;
@property(readonly, nonatomic) NSURL *emptyAttachment;
@property(readonly, nonatomic) BOOL emptyAttachmentExists;
- (BOOL)createEmptyAttachmentAtURL:(id)arg1;
@property(readonly, copy, nonatomic) NSData *archivedData;
- (id)archivedDataWithPartNumber:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)appleDoubleDataWithFilename:(const char *)arg1 length:(unsigned long long)arg2;
- (id)appleSingleDataWithFilename:(const char *)arg1 length:(unsigned long long)arg2;

@end

