//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNUIUserActionDisambiguationModeler : NSObject
{
    id <CNUIUserActionDiscovering> _discoveringHelper;
    id <CNUIUserActionRanking> _rankingHelper;
    id <CNUIDefaultUserActionFetcher> _defaultActionFetcher;
    id <CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;
}

+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) id <CNUIUserActionDiscoveringEnvironment> discoveringEnvironment; // @synthesize discoveringEnvironment=_discoveringEnvironment;
@property(retain, nonatomic) id <CNUIDefaultUserActionFetcher> defaultActionFetcher; // @synthesize defaultActionFetcher=_defaultActionFetcher;
@property(retain, nonatomic) id <CNUIUserActionRanking> rankingHelper; // @synthesize rankingHelper=_rankingHelper;
@property(retain, nonatomic) id <CNUIUserActionDiscovering> discoveringHelper; // @synthesize discoveringHelper=_discoveringHelper;
- (void).cxx_destruct;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)sortActionsOnModel:(id)arg1 schedulerProvider:(id)arg2;
- (id)modelsWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 schedulerProvider:(id)arg6;
- (id)recentActionsFromActions:(id)arg1 schedulerProvider:(id)arg2;
- (id)defaultActionFromActions:(id)arg1 schedulerProvider:(id)arg2;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 schedulerProvider:(id)arg3;
- (id)modelsWithContact:(id)arg1 actionType:(id)arg2 schedulerProvider:(id)arg3;
- (void)setContactStore:(id)arg1;
- (id)initWithDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4;
- (id)initWithIDSAvailablilityProvider:(id)arg1;
- (id)init;

@end

