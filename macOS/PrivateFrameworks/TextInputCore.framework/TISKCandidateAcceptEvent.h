//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent
{
    TIKeyboardCandidate *_candidate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void)reportToSession:(id)arg1;
- (id)description;
- (id)init:(id)arg1 order:(long long)arg2;

@end

