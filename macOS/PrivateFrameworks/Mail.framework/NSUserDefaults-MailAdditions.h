//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSURL;

@interface NSUserDefaults (MailAdditions)
- (id)_mf_objectForKey:(id)arg1 version:(unsigned long long)arg2;
- (void)setDisplayName:(id)arg1 forFlagColor:(BOOL)arg2;
- (id)displayNameForFlagColor:(BOOL)arg1;
@property(nonatomic) BOOL autosaveWindows;
@property(readonly, nonatomic) double autoSaveStoreDelay;
@property(readonly, nonatomic) double autoSaveDelay;
@property(retain, nonatomic) NSURL *downloadDirectoryURL;
@end

