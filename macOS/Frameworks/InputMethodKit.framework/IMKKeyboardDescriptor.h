//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IMKCandidateMenu;

@interface IMKKeyboardDescriptor : NSObject
{
    id <IMKCandidateMenu> _candidateMenu;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IMKCandidateMenu> candidateMenu; // @synthesize candidateMenu=_candidateMenu;
- (id)initWithCandidateMenu:(id)arg1;
- (id)init;

@end

