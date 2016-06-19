//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "NSFilePresenter.h"

@class IMPluginPayload, NSColor, NSDate, NSFont, NSMenuItem, NSNumber, NSOperationQueue, NSString, NSURL, NSView, SOInputLineAutoSender, SOTimer, SOTimerCenter;

@interface SOInputLine : NSTextView <NSFilePresenter>
{
    NSDate *_firstKey;
    NSDate *_lastKey;
    SOTimer *_timer;
    SOTimerCenter *_timerCenter;
    NSColor *_textColor;
    unsigned int _nonEmpty:1;
    unsigned int _significantChange:1;
    unsigned int _sTermToggled:1;
    BOOL _delegateRespondsToInputLineDidChangeSignificantly;
    BOOL _delegateRespondsToInputLineRequestedPriorOutgoingMessage;
    BOOL _delegateRespondsToInputLineRequestedNextOutgoingMessage;
    BOOL _delegateRespondsToInputLineShouldInsertNewLine;
    BOOL _canDisplayInlineFileTransfers;
    BOOL _placeholderAttributedStringNeedsUpdate;
    BOOL _dirty;
    BOOL _automaticEmojiSubstitutionAllowed;
    BOOL _automaticEmojiSubstitutionEnablediMessage;
    BOOL _automaticEmojiSubstitutionEnabledLegacy;
    BOOL _useBigEmoji;
    NSFont *_defaultFont;
    NSFont *_lastUsedSubstitutedFont;
    NSString *_placeholderText;
    NSNumber *_forcedMinimumHeight;
    NSColor *_transferTextColor;
    NSColor *_transferBackgroundColor;
    NSView *_keyForwardingView;
    NSMenuItem *_substituteEmojiMenuItem;
    double _lastChangedTime;
    SOInputLineAutoSender *_autoSender;
    IMPluginPayload *_balloonPluginPayloadToInsert;
    NSURL *_dropDirectoryURL;
}

+ (BOOL)isFileTransferObject:(id)arg1;
+ (id)_updateCharacterSet;
+ (double)minimumFontSize;
@property(retain) NSURL *dropDirectoryURL; // @synthesize dropDirectoryURL=_dropDirectoryURL;
@property(nonatomic) BOOL useBigEmoji; // @synthesize useBigEmoji=_useBigEmoji;
@property(nonatomic) BOOL automaticEmojiSubstitutionEnabledLegacy; // @synthesize automaticEmojiSubstitutionEnabledLegacy=_automaticEmojiSubstitutionEnabledLegacy;
@property(nonatomic) BOOL automaticEmojiSubstitutionEnablediMessage; // @synthesize automaticEmojiSubstitutionEnablediMessage=_automaticEmojiSubstitutionEnablediMessage;
@property(retain, nonatomic) IMPluginPayload *balloonPluginPayloadToInsert; // @synthesize balloonPluginPayloadToInsert=_balloonPluginPayloadToInsert;
@property(retain, nonatomic) SOInputLineAutoSender *autoSender; // @synthesize autoSender=_autoSender;
@property(nonatomic) double lastChangedTime; // @synthesize lastChangedTime=_lastChangedTime;
@property(nonatomic, getter=isAutomaticEmojiSubstitutionAllowed) BOOL automaticEmojiSubstitutionAllowed; // @synthesize automaticEmojiSubstitutionAllowed=_automaticEmojiSubstitutionAllowed;
@property(retain, nonatomic) NSMenuItem *substituteEmojiMenuItem; // @synthesize substituteEmojiMenuItem=_substituteEmojiMenuItem;
@property(retain) NSView *keyForwardingView; // @synthesize keyForwardingView=_keyForwardingView;
@property(retain, nonatomic) NSColor *transferBackgroundColor; // @synthesize transferBackgroundColor=_transferBackgroundColor;
@property(retain, nonatomic) NSColor *transferTextColor; // @synthesize transferTextColor=_transferTextColor;
@property(retain, nonatomic) NSNumber *forcedMinimumHeight; // @synthesize forcedMinimumHeight=_forcedMinimumHeight;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain, nonatomic) NSFont *lastUsedSubstitutedFont; // @synthesize lastUsedSubstitutedFont=_lastUsedSubstitutedFont;
@property(nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
- (void)_fixAttrsOnSelectionChange:(id)arg1;
- (void)_setTypingAttributesForSelection:(struct _NSRange)arg1;
- (void)makeTextStandardSize:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextLarger:(id)arg1;
- (void)_verifyAndInsertBalloonPluginPayloadToAttachmentString:(id)arg1 range:(struct _NSRange *)arg2;
- (void)_readPluginPayloadFromPasteboard:(id)arg1;
- (void)_createAndSetPluginPayloadObject:(id)arg1;
- (id)_chatForGuid:(id)arg1;
- (BOOL)pasteAttributedStringFromPasteboard:(id)arg1;
- (BOOL)pasteRtfFromPasteboard:(id)arg1;
- (BOOL)pasteRtfdFromPasteboard:(id)arg1;
- (BOOL)pasteStringFromPasteboard:(id)arg1 withAttributes:(id)arg2;
- (BOOL)insertAttributedStringWithAttachments:(id)arg1;
- (BOOL)writeAttributedStringSelectionToPasteboard:(id)arg1 forType:(id)arg2;
- (BOOL)writeSelectedURLsToPasteboard:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)protectFileTransferObjectsFromSelectionInCopyOrPaste;
- (void)ensureTextNotInsertedAdjacentToFileTransfer;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (void)concludeDragOperation:(id)arg1;
- (void)_clearParagraphStyle;
- (BOOL)_readSelectionFromPasteboard:(id)arg1 types:(id)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (void)_getIMHandleURL:(id *)arg1 andText:(id *)arg2 fromPasteboard:(id)arg3;
- (id)readablePasteboardTypes;
- (id)acceptableDragTypes;
- (void)setCanDisplayInlineFileTransfers:(BOOL)arg1;
- (void)_updateMaps:(id)arg1;
- (id)_attachedFileURLs;
- (BOOL)containsAudioMessage;
- (void)copySelectionToFindPboard:(id)arg1;
- (BOOL)insertFileURLs:(id)arg1;
- (BOOL)insertFileURL:(id)arg1 previewImage:(id)arg2;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (BOOL)insertAttributedString:(id)arg1;
- (BOOL)insertAttributedString:(id)arg1 intoRange:(struct _NSRange)arg2;
- (void)_showErrorSheetWithTitle:(id)arg1 message:(id)arg2 helpAnchor:(id)arg3;
- (BOOL)canBeReceivedInline:(id)arg1;
- (BOOL)canRenderInline:(id)arg1;
- (BOOL)canAttachFile;
- (void)dealloc;
- (void)insertNewline:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_postNotification:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (id)RTFDFromRange:(struct _NSRange)arg1;
- (id)RTFFromRange:(struct _NSRange)arg1;
@property id <SOInputLineDelegate> delegate; // @dynamic delegate;
- (void)setMinSize:(struct CGSize)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setAutomaticSpellingCorrectionEnabled:(BOOL)arg1;
- (void)setAutomaticDashSubstitutionEnabled:(BOOL)arg1;
- (void)setAutomaticDataDetectionEnabled:(BOOL)arg1;
- (void)setAutomaticLinkDetectionEnabled:(BOOL)arg1;
- (void)setAutomaticQuoteSubstitutionEnabled:(BOOL)arg1;
- (void)setSmartInsertDeleteEnabled:(BOOL)arg1;
- (void)setGrammarCheckingEnabled:(BOOL)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setAutomaticTextReplacementEnabled:(BOOL)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)didChangeText;
- (BOOL)shouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (id)smartInsertBeforeStringForString:(id)arg1 replacingRange:(struct _NSRange)arg2;
- (id)smartInsertAfterStringForString:(id)arg1 replacingRange:(struct _NSRange)arg2;
- (unsigned long long)characterIndexForInsertionAtPoint:(struct CGPoint)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_stripMutableAttributedString:(id)arg1;
- (void)_endTextDidChangeWithFont:(id)arg1;
- (void)_textSizeDidChange:(id)arg1;
- (void)_textFontDidChange:(id)arg1;
- (void)_updatePlaceholderAttributedString;
- (void)_placeholderAttributedStringNeedsUpdate;
- (void)updateAutomaticEmojiSubstitutionState;
- (void)_updateValue:(id)arg1 forSettingsKey:(id)arg2;
- (void)_helperDefaultsDidChange:(id)arg1;
- (void)_settingsDidChange;
- (void)_initializeInputLineSettings:(id)arg1;
- (void)updateUseBigEmoji;
- (void)stopTimers;
- (BOOL)insertLinkAtSelection:(id)arg1 withText:(id)arg2;
- (void)applyLinkToSelection:(id)arg1 withText:(id)arg2;
- (void)addLink:(id)arg1;
@property(nonatomic, getter=isAutomaticEmojiSubstitutionEnabled) BOOL automaticEmojiSubstitutionEnabled; // @dynamic automaticEmojiSubstitutionEnabled;
- (void)clear;
- (void)_fetchNextSentMessage;
- (void)_fetchPriorSentMessage;
- (id)rawAttributedStringValue;
- (BOOL)textIsNonEmpty;
- (void)_timerFired;
- (void)_autoSend:(int)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)toggleAutomaticEmojiSubstitution:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (BOOL)performDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)_applyDragAndDropFormatting:(id)arg1;
- (void)_commonSOInputLineInit;
- (void)awakeFromNib;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (id)currentFont;
@property(retain, nonatomic) NSFont *defaultFont; // @synthesize defaultFont=_defaultFont;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

