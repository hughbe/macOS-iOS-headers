//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSIObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying>
{
    PSIDate *_creationDate;
}

- (void).cxx_destruct;
@property(readonly) PSIDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 creationDate:(id)arg2;

@end

