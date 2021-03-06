/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARDaemonService : NSObject <ARDaemonServiceBaseProtocol, ARServiceType> {
    bool  _active;
    NSString * _clientBundleIdentifier;
    int  _clientProcessIdentifier;
    NSString * _clientProcessName;
    NSXPCConnection * _connection;
    <ARDaemonServiceDataSource> * _dataSource;
    <ARDaemonServiceDelegate> * _delegate;
    NSObject<OS_os_transaction> * _transaction;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly) NSString *clientProcessName;
@property (nonatomic) <ARDaemonServiceDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARDaemonServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)isUnique;
+ (id)serviceName;

- (void).cxx_destruct;
- (void)clearAlgorithmObservers;
- (id)clientBundleIdentifier;
- (int)clientProcessIdentifier;
- (id)clientProcessName;
- (id)dataSource;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3;
- (void)interruptionHandler;
- (void)invalidate;
- (void)invalidationHandler;
- (bool)isActive;
- (void)resume;
- (void)setActive:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startService:(id /* block */)arg1;
- (void)suspend;

@end
