//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AKControllerDelegateProtocol.h"
#import "NSWindowDelegate.h"

@class AKController, MUContentBorderView, NSArray, NSData, NSStackView, NSString, NSUndoManager, NSView, NSViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate>;

@interface MarkupViewController : NSViewController <AKControllerDelegateProtocol, NSWindowDelegate>
{
    BOOL _sourceContentIsLoaded;
    BOOL _viewDidAppearWasDoneOnce;
    NSStackView *_toolBarViewHolder;
    NSView *_contentViewHolder;
    id _sourceContent;
    AKController *_annotationController;
    NSViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> *_contentViewController;
    id _digestedSourceContent;
    NSData *_sourceArchivedModelData;
    NSArray *_sourceContentReplacedAnnotationMaps;
    double _creationTimeStamp;
    NSUndoManager *_undoManager;
    MUContentBorderView *_borderOverlayView;
    double _initialContentScale;
}

@property BOOL viewDidAppearWasDoneOnce; // @synthesize viewDidAppearWasDoneOnce=_viewDidAppearWasDoneOnce;
@property double initialContentScale; // @synthesize initialContentScale=_initialContentScale;
@property(retain) MUContentBorderView *borderOverlayView; // @synthesize borderOverlayView=_borderOverlayView;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property double creationTimeStamp; // @synthesize creationTimeStamp=_creationTimeStamp;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps; // @synthesize sourceContentReplacedAnnotationMaps=_sourceContentReplacedAnnotationMaps;
@property(retain) NSData *sourceArchivedModelData; // @synthesize sourceArchivedModelData=_sourceArchivedModelData;
@property(retain) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property(retain) NSViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property BOOL sourceContentIsLoaded; // @synthesize sourceContentIsLoaded=_sourceContentIsLoaded;
@property(retain) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property(nonatomic) __weak NSView *contentViewHolder; // @synthesize contentViewHolder=_contentViewHolder;
@property(nonatomic) __weak NSStackView *toolBarViewHolder; // @synthesize toolBarViewHolder=_toolBarViewHolder;
- (void).cxx_destruct;
- (void)_someViewDidChangeFrame:(id)arg1;
- (void)_updateBorderOverlayView;
- (struct CGSize)_usableScreenSize;
- (BOOL)_writeToDataConsumer:(struct CGDataConsumer *)arg1 embedSourceImageAndEditModel:(BOOL)arg2 error:(id *)arg3;
- (id)_outputContentType;
- (id)_sourceContentType;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)clearHighlightableSelectionForAnnotationController:(id)arg1;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (BOOL)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (struct CGRect)postioningRectForCandidatePicker;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id *)arg3;
- (void)setPreferredCursor:(id)arg1 forAnnotationController:(id)arg2;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)deleteMessages:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (BOOL)_validateItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)addToolbarButton:(id)arg1;
- (id)createArchivedModelData;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(BOOL)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(BOOL)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *outputType;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (id)_getUndoManager:(BOOL)arg1;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)idealViewSizeWithScaleFactor:(double)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGRect)idealScreenFrame;
- (void)_teardown;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)windowWillClose:(id)arg1;
- (void)viewDidAppear;
- (void)_loadContent;
- (void)loadView;
- (struct CGRect)contentViewRectInScreenCoordinates;
- (id)nibBundle;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

