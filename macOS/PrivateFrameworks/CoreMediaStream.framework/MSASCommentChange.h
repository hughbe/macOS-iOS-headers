//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSASComment;

@interface MSASCommentChange : NSObject
{
    int _deletionIndex;
    int _type;
    MSASComment *_comment;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int deletionIndex; // @synthesize deletionIndex=_deletionIndex;
@property(retain, nonatomic) MSASComment *comment; // @synthesize comment=_comment;
- (id)description;

@end

