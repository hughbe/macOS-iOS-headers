//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSManagedObjectContext, NSManagedObjectID, NSString;

@protocol CalDAVEntityTaggableOperation
@property(readonly) BOOL shouldHaveTagsUpdated;
@property(retain) NSManagedObjectID *objectID;
@property(retain) NSString *scheduleTag;
@property(retain) NSString *eTag;
- (void)updateInFlightTagsInContext:(NSManagedObjectContext *)arg1;
@end

