//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/NSObject-Protocol.h>

@class MiroAutoEditLogger, MiroMemory, Project;

@protocol MiroAutoEditDelegate <NSObject>
@property(readonly, nonatomic) MiroAutoEditLogger *logger;
@property(readonly, nonatomic) MiroMemory *activeMemory;
@property(readonly, nonatomic) Project *project;

@optional
@property(readonly, nonatomic) BOOL titleIsSupported;
@end

