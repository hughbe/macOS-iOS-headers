/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    HMFUnfairLock * _lock;
    NSString * _logIdentifier;
    HMDMessageDispatcher * _messageDispatcher;
    NSMutableArray * _queuedMessages;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly) bool companionIsResident;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFUnfairLock *lock;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) NSMutableArray *queuedMessages;
@property (readonly) HMDDevice *residentDeviceForCamera;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (bool)companionIsResident;
- (id)dequeueMessage;
- (void)enqueueMessage:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)lock;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)nextMessage;
- (id)queuedMessages;
- (id)residentDeviceForCamera;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(id /* block */)arg7;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)sendNextMessage;

@end
