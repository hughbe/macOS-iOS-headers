//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSurface, NSHMDIOSurfaceSession, NSSLSHMDDrawable;

@interface NSHMDIOSurfaceDrawable : NSObject
{
    NSHMDIOSurfaceSession *_session;
    NSSLSHMDDrawable *_drawable;
    double _inputTimestamp;
}

- (void)presentAtTimestamp:(double)arg1;
@property unsigned long long debugSignpost;
@property double inputTimeStamp;
@property(readonly) IOSurface *IOSurface;
@property(readonly) NSHMDIOSurfaceSession *session;
- (void)dealloc;
- (id)initWithSession:(id)arg1 SLSHMDDrawable:(id)arg2;

@end

