//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/ABRemoteRecord.h>

#import "NSCopying.h"

@class NSString;

@interface ABRemoteGroup : ABRemoteRecord <NSCopying>
{
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

