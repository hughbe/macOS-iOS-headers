/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCFoldersFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate> {
    NSArray * _allBuiltinFolders;
    NSDictionary * _builtInContentControllers;
    NSArray * _builtinFolders;
    NSManagedObjectContext * _context;
    __RCFolderContentsDelegate * _folderContentsDelegate;
    bool  _hasPerformedUserControllerFetch;
    NSHashTable * _observers;
    NSMutableArray * _pendingUpdates;
    NSMutableDictionary * _userContentControllers;
    NSFetchedResultsController * _userFoldersController;
}

@property (nonatomic, readonly) NSArray *allBuiltinFolders;
@property (readonly) NSMutableDictionary *builtInContentControllers;
@property (nonatomic, readonly) NSArray *builtinFolders;
@property (nonatomic, readonly) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *userContentControllers;
@property (nonatomic, readonly) NSArray *userFolders;

+ (id)builtinFoldersSectionIdentifier;
+ (id)userFoldersSectionIdentifier;

- (void).cxx_destruct;
- (id)_contentControllerForId:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (id)allBuiltinFolders;
- (id)builtInContentControllers;
- (id)builtinFolders;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (id)currentSnapshot;
- (id)folderAtIndexPath:(id)arg1;
- (id)folderWithIdentifier:(id)arg1;
- (id)indexPathForFolder:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (unsigned long long)playableCountForFolder:(id)arg1;
- (id)playableRecordingsInFolder:(id)arg1;
- (void)reloadBuiltinFolder:(id)arg1;
- (void)reloadUserFolder:(id)arg1;
- (void)removeContentObserver:(id)arg1;
- (id)userContentControllers;
- (id)userFolders;

@end
