//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@class NSString;

@interface IFMakeTempDirsElement : IFInstallQueueElement
{
    NSString *_tempPath;
}

- (long long)run;
- (BOOL)createDirectory:(id)arg1 withPermissions:(id)arg2 eraseExisting:(BOOL)arg3;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

