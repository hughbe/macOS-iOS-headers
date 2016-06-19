//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpectrum/SPCTableStore.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface SPCTablePageStore : SPCTableStore <NSSecureCoding>
{
    NSArray *_pages;
    unsigned long long _pageCount;
}

@property(readonly, nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(readonly, copy, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (id)createdObjectForIndex:(unsigned long long)arg1;
- (void)enumeratePagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)pageForKey:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)pageAtIndex:(unsigned long long)arg1 createIfNecessary:(BOOL)arg2;
- (id)initWithPageKeys:(id)arg1 andPages:(id)arg2;
- (id)initWithPageKeys:(id)arg1;

@end

