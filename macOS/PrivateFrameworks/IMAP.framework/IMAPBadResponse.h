//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPBasicResponse.h>

@interface IMAPBadResponse : IMAPBasicResponse
{
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
- (const char *)_responseName;
- (BOOL)descriptionIncludesUserString;

@end

