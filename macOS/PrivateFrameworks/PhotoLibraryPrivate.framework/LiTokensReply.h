//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@class NSArray;

@interface LiTokensReply : LiReply
{
    NSArray *_tokens;
}

+ (unsigned char)encodingObjectType;
@property(retain, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithReplyStatus:(unsigned char)arg1 forRequest:(id)arg2 tokens:(id)arg3;

@end

