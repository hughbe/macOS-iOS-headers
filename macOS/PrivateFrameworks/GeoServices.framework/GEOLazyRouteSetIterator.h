//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEORouteSet;

@interface GEOLazyRouteSetIterator : NSObject
{
    GEORouteSet *_routeSet;
    unsigned long long _contingencyRouteIndex;
}

- (void)setContingencyRouteIndex:(unsigned long long)arg1;
- (id)nextLazyRoute;
- (void)dealloc;
- (id)initWithRouteSet:(id)arg1;

@end

