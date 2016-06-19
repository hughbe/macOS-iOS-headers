//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

@interface SFTableAlignmentSchema : NSObject <NSSecureCoding>
{
    NSArray *_tableColumnAlignment;
    NSDictionary *_metadata;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *tableColumnAlignment; // @synthesize tableColumnAlignment=_tableColumnAlignment;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tableColumnAlignment:(unsigned long long)arg1;

@end

