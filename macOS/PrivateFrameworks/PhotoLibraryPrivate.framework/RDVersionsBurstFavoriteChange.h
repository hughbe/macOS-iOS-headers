//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class NSSet;

@interface RDVersionsBurstFavoriteChange : RDUndoRedoChange
{
    BOOL _burstFavorited;
    NSSet *_versionAddresses;
}

@property(readonly, nonatomic) BOOL burstFavorited; // @synthesize burstFavorited=_burstFavorited;
@property(readonly, retain, nonatomic) NSSet *versionAddresses; // @synthesize versionAddresses=_versionAddresses;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (id)description;
- (id)initWithVersionAddresses:(id)arg1 burstFavorited:(BOOL)arg2;

@end

