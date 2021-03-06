//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@interface SVXDeviceProblemsState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFixingProblems;
    unsigned long long _problems;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long problems; // @synthesize problems=_problems;
@property(readonly, nonatomic) BOOL isFixingProblems; // @synthesize isFixingProblems=_isFixingProblems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithIsFixingProblems:(BOOL)arg1 problems:(unsigned long long)arg2;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

