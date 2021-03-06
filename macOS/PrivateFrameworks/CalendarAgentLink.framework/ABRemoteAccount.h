//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/NSSecureCoding-Protocol.h>

@class NSString;

@interface ABRemoteAccount : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    BOOL _isEnabled;
    BOOL _isPersistent;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL isPersistent; // @synthesize isPersistent=_isPersistent;
@property BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

