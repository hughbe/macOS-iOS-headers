/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate> {
    id /* block */  _completionHandler;
    TPSContextualDuetEvent * _event;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPSContextualDuetEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (id)event;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEvent:(id)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
