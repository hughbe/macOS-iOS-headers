//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGQPStoredMessage : NSObject
{
    BOOL _isSent;
    NSString *_content;
    struct SGUnixTimestamp_ _creationTimestamp;
}

+ (id)messageWithContent:(id)arg1 isSent:(BOOL)arg2 creationTimestamp:(struct SGUnixTimestamp_)arg3;
+ (id)sortByCreationDesc:(id)arg1;
+ (id)messageWithContent:(id)arg1 isSent:(BOOL)arg2;
@property(readonly, nonatomic) struct SGUnixTimestamp_ creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) BOOL isSent; // @synthesize isSent=_isSent;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContent:(id)arg1 isSent:(BOOL)arg2 creationTimestamp:(struct SGUnixTimestamp_)arg3;
- (id)init;

@end

