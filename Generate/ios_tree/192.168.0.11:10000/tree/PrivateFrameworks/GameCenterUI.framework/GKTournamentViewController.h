/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTournamentViewController : UIViewController <GKTournamentHostInterface> {
    UIAlertController * _alertController;
    <GKTournamentViewControllerDelegate> * _delegate;
    GKExtensionManager * _extensionManager;
    bool  _playerResigned;
    GKScore * _playerScore;
    GKTournament * _tournament;
    GKTournamentDefinition * _tournamentDefinition;
    NSString * _tournamentID;
    GKTournamentViewRequest * _viewRequest;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKTournamentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool playerResigned;
@property (nonatomic, retain) GKScore *playerScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GKTournament *tournament;
@property (nonatomic, retain) GKTournamentDefinition *tournamentDefinition;
@property (nonatomic, retain) NSString *tournamentID;
@property (nonatomic, retain) GKTournamentViewRequest *viewRequest;

- (void).cxx_destruct;
- (id)alertController;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (oneway void)extensionDidTerminateWithError:(id)arg1;
- (id)extensionManager;
- (oneway void)extensionWillFinish;
- (id)initWithViewRequest:(id)arg1;
- (void)loadRemoteView;
- (oneway void)playTournament:(id)arg1 withTryToken:(id)arg2;
- (bool)playerResigned;
- (id)playerScore;
- (void)setAlertController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionManager:(id)arg1;
- (void)setPlayerResigned:(bool)arg1;
- (void)setPlayerScore:(id)arg1;
- (void)setTournamentDefinition:(id)arg1;
- (void)setTournamentID:(id)arg1;
- (void)setViewRequest:(id)arg1;
- (id)tournament;
- (id)tournamentDefinition;
- (id)tournamentID;
- (void)viewDidLoad;
- (id)viewRequest;
- (void)viewWillAppear:(bool)arg1;
- (void)willFinishWithError:(id)arg1;

@end
