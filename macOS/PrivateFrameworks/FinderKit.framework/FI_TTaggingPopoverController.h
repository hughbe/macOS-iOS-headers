//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TPopoverController.h>

__attribute__((visibility("hidden")))
@interface FI_TTaggingPopoverController : FI_TPopoverController
{
    struct TNSRef<FI_TTagEditorController *, void> _editorController;
    struct TNSRef<FI_TTextField *, void> _assignTagsToTitleText;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelOperation:(id)arg1;
- (void)cancel:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)finishedEditing;
- (void)showPopoverForNodes:(const struct TFENodeVector *)arg1 belowView:(id)arg2 verticalInset:(double)arg3;
- (void)showPopoverOverNode:(const struct TFENode *)arg1 forNodes:(const struct TFENodeVector *)arg2 browserViewController:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (void)setAssignToTitleTextForNodes:(const struct TFENodeVector *)arg1;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (_Bool)useSeparatorsBetweenSubviews;
- (Class)popoverClass;
- (id)initWithWidth:(double)arg1;

@end

