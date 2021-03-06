//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ICADevices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICDProfile : NSObject <NSCopying>
{
    struct {
        unsigned int size;
        int cmmId;
        unsigned int version;
        int deviceClass;
        int colorSpace;
        int pcs;
        struct {
            unsigned short year;
            unsigned short month;
            unsigned short day;
            unsigned short hours;
            unsigned short minutes;
            unsigned short seconds;
        } date;
        int magic;
        int platform;
        unsigned int flags;
        int manufacturer;
        unsigned int model;
        unsigned int attributes[2];
        unsigned int renderingIntent;
        struct {
            int X;
            int Y;
            int Z;
        } illuminant;
        int creator;
        char reserved[44];
    } _header;
    NSString *_name;
    struct ColorSyncProfile *_ref;
}

+ (id)profileWithSource:(id)arg1 andAbstract:(id)arg2;
+ (id)profileWithData:(id)arg1;
+ (id)profileWithPath:(id)arg1;
+ (id)profileWithRef:(struct ColorSyncProfile *)arg1;
- (struct ColorSyncProfile *)profRef;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (id)initWithRef:(struct ColorSyncProfile *)arg1;

@end

