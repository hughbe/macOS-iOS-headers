//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CoreWiFiRegulatoryTuple : NSObject
{
    unsigned long long extensionIdentifier;
    unsigned long long regulatoryClass;
    unsigned long long coverageClass;
}

@property(readonly, nonatomic) unsigned long long coverageClass; // @synthesize coverageClass;
@property(readonly, nonatomic) unsigned long long regulatoryClass; // @synthesize regulatoryClass;
@property(readonly, nonatomic) unsigned long long extensionIdentifier; // @synthesize extensionIdentifier;
- (id)description;
- (id)initWithTuple:(char *)arg1 withLength:(unsigned long long)arg2;

@end

