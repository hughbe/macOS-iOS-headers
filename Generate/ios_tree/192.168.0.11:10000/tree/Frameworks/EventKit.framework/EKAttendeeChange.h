/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendeeChange : EKParticipantChange <EKOwnerIDProviding> {
    EKObjectID * _ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAttendeeChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAttendeeChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAttendeeChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;

@end
