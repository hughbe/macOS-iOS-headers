//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem
{
    NSString *_symbolicColorName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName=_symbolicColorName;
- (void)write:(id)arg1;
@property(retain, nonatomic) NSString *colorString;
- (void)parserFoundAttributes:(id)arg1;
- (id)init;

@end

