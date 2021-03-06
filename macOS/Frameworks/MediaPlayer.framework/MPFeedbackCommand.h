//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand
{
    long long _presentationStyle;
    BOOL _active;
    NSString *_localizedTitle;
    NSString *_localizedShortTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedShortTitle; // @synthesize localizedShortTitle=_localizedShortTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (id)newCommandEventWithState:(long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setPresentationStyle:(long long)arg1;
- (long long)presentationStyle;

@end

