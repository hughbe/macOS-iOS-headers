//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem
{
    NSDictionary *_attributionInfo;
    long long _attributionType;
}

@property(readonly, nonatomic) long long attributionType; // @synthesize attributionType=_attributionType;
@property(readonly, copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bundleID;
- (id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3;

@end

