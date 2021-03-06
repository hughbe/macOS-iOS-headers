/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAuthorizationServer : NSObject {
    NSMutableArray * _authorizationRequestIdentifiers;
    HDHealthStoreClient * _client;
    _Atomic bool  _invalidated;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sourceBundleIdentifier;
    NSUUID * _transactionSessionIdentifier;
}

@property (nonatomic, retain) NSMutableArray *authorizationRequestIdentifiers;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) NSUUID *transactionSessionIdentifier;

- (void).cxx_destruct;
- (id)_authorizationStatusForTypes:(id)arg1 error:(id*)arg2;
- (void)_invalidate;
- (void)_performIfAuthorizedForTypes:(id)arg1 sharing:(bool)arg2 onQueue:(id)arg3 usingBlock:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(id /* block */)arg4 requestCompletionHandler:(id /* block */)arg5;
- (id)authorizationRequestIdentifiers;
- (id)authorizationStatusForType:(id)arg1 error:(id*)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)client;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(id /* block */)arg3 requestCompletionHandler:(id /* block */)arg4;
- (void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(bool)arg2 authorizationNeededHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 requestCompletionHandler:(id /* block */)arg3;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* block */)arg1 requestCompletionHandler:(id /* block */)arg2;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id*)arg2;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)profile;
- (id)queue;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id*)arg2;
- (void)setAuthorizationRequestIdentifiers:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTransactionSessionIdentifier:(id)arg1;
- (id)sourceBundleIdentifier;
- (id)transactionSessionIdentifier;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(id /* block */)arg1;

@end
