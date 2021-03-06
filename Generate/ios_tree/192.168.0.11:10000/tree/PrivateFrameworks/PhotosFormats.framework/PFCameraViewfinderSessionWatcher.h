/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    <PFCameraViewfinderSessionWatcherDelegate> * _delegate;
    bool  _isCameraRunning;
    FigCameraViewfinder * _viewFinder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <PFCameraViewfinderSessionWatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCameraRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (id)delegate;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;
- (bool)isCameraRunning;

@end
