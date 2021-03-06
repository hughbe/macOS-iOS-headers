//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMeCardObserver-Protocol.h>

@class MapsSuggestionsMeCard, MapsSuggestionsShortcutManager, NSString;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver>
{
    MapsSuggestionsShortcutManager *_shortcutManager;
    MapsSuggestionsMeCard *_meCard;
    CDUnknownBlockType _updateHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2;
- (id)mapItemFormShortcutForCNIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

