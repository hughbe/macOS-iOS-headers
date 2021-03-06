/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKImportPendingRelationship : NSManagedObject

@property (nonatomic, retain) NSString *cdEntityName;
@property (nonatomic, retain) NSNumber *needsDelete;
@property (nonatomic, retain) NSCKImportOperation *operation;
@property (nonatomic, retain) NSString *recordName;
@property (nonatomic, retain) NSString *relatedEntityName;
@property (nonatomic, retain) NSString *relatedRecordName;
@property (nonatomic, retain) NSString *relationshipName;

+ (id)entityPath;
+ (id)insertPendingRelationshipForFailedRelationship:(id)arg1 forOperation:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4;

@end
