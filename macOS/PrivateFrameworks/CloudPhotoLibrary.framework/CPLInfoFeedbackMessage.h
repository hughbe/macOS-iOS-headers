//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage
{
    NSDictionary *_info;
}

+ (id)feedbackType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (id)serverMessage;
- (id)initWithInfo:(id)arg1;

@end

