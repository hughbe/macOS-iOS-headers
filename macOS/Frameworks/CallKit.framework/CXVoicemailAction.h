//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXVoicemailAction : CXAction
{
    NSUUID *_voicemailUUID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *voicemailUUID; // @synthesize voicemailUUID=_voicemailUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)arg1;

@end

