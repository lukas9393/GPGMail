/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DOMEventListener.h"
#import "EditingMessageWebViewDelegate.h"
#import "NSUserInterfaceValidations.h"

@class ComposeBackEnd, ComposeViewController, DOMHTMLAnchorElement, DOMHTMLObjectElement, DOMNode, EditableWebMessageDocument, EditingMessageWebView, EditingWebMessageController, HyperlinkEditor, NSArray, NSDictionary, NSMutableArray, NSString, WebFrame;

@interface WebViewEditor : NSObject <DOMEventListener, EditingMessageWebViewDelegate, NSUserInterfaceValidations>
{
    EditingWebMessageController *_messageController;
    BOOL _finalSpellCheckingIsInProgress;
    NSMutableArray *_uneditedEditableElements;
    NSMutableArray *_editedEditableElements;
    BOOL _shouldAttachFilesAtEnd;
    BOOL _containsRichText;
    BOOL _containsRichTextFlagIsValid;
    BOOL _needToCheckRichnessInRange;
    BOOL _needToFinishMakingPlainAfterRemovingStationery;
    BOOL _isDeletingAllEncompassingSelection;
    EditingMessageWebView *_webView;
    ComposeViewController *_composeViewController;
    WebFrame *_frameAllowedToLoadContent;
    NSDictionary *_infoForRichnessTest;
    ComposeBackEnd *_composeBackEnd;
    HyperlinkEditor *_hyperlinkEditor;
    DOMHTMLAnchorElement *_linkWhoseTextIsBeingEdited;
    NSArray *_backgroundTilingElements;
    NSArray *_backgroundTilingDivs;
    NSArray *_backgroundTilingFixedSizes;
    DOMNode *_editableElementWithMouseDown;
}

@property(nonatomic) BOOL isDeletingAllEncompassingSelection; // @synthesize isDeletingAllEncompassingSelection=_isDeletingAllEncompassingSelection;
@property(retain, nonatomic) DOMNode *editableElementWithMouseDown; // @synthesize editableElementWithMouseDown=_editableElementWithMouseDown;
@property(nonatomic) BOOL needToFinishMakingPlainAfterRemovingStationery; // @synthesize needToFinishMakingPlainAfterRemovingStationery=_needToFinishMakingPlainAfterRemovingStationery;
@property(retain, nonatomic) NSArray *backgroundTilingFixedSizes; // @synthesize backgroundTilingFixedSizes=_backgroundTilingFixedSizes;
@property(retain, nonatomic) NSArray *backgroundTilingDivs; // @synthesize backgroundTilingDivs=_backgroundTilingDivs;
@property(retain, nonatomic) NSArray *backgroundTilingElements; // @synthesize backgroundTilingElements=_backgroundTilingElements;
@property(retain, nonatomic) DOMHTMLAnchorElement *linkWhoseTextIsBeingEdited; // @synthesize linkWhoseTextIsBeingEdited=_linkWhoseTextIsBeingEdited;
@property(nonatomic) BOOL needToCheckRichnessInRange; // @synthesize needToCheckRichnessInRange=_needToCheckRichnessInRange;
@property(nonatomic) BOOL containsRichTextFlagIsValid; // @synthesize containsRichTextFlagIsValid=_containsRichTextFlagIsValid;
@property(retain, nonatomic) HyperlinkEditor *hyperlinkEditor; // @synthesize hyperlinkEditor=_hyperlinkEditor;
@property(retain, nonatomic) NSDictionary *infoForRichnessTest; // @synthesize infoForRichnessTest=_infoForRichnessTest;
@property(retain, nonatomic) WebFrame *frameAllowedToLoadContent; // @synthesize frameAllowedToLoadContent=_frameAllowedToLoadContent;
@property(nonatomic) __weak ComposeViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
@property(retain, nonatomic) EditingMessageWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)webView:(id)arg1 didWriteSelectionToPasteboard:(id)arg2;
- (BOOL)insertNewline:(id)arg1;
- (BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)webViewDidChangeSelection:(id)arg1;
- (id)replaceOldSignatureWithNewSignature:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (void)mouseUpDidHappen:(id)arg1 inWebView:(id)arg2;
- (void)mouseDownDidHappen:(id)arg1 inWebView:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *editedEditableElements;
- (void)_doOrUndoEditingInSignatureWithInfo:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)_stationeryDidFinishLoadingResources:(id)arg1;
- (void)_webViewDidLoadStationery:(id)arg1;
- (void)prepareToRemoveStationery;
- (void)insertAttributedStringOfAttachments:(id)arg1 allAttachmentsAreOkay:(BOOL)arg2;
- (BOOL)_isOkayToInsertAttachment:(id)arg1;
- (void)_insertAttributedStringOfAttachments:(id)arg1 allAttachmentsAreOkay:(BOOL)arg2;
@property(nonatomic) BOOL shouldAttachFilesAtEnd;
@property(readonly, nonatomic) BOOL isOkayToLoadStationery;
- (BOOL)webView:(id)arg1 shouldInsertAttachments:(id)arg2 context:(id)arg3;
- (id)alertForConvertingToRichText;
@property(nonatomic) BOOL allowsRichText;
@property(retain, nonatomic) ComposeBackEnd *composeBackEnd; // @synthesize composeBackEnd=_composeBackEnd;
- (void)prepareToGoAway;
@property(readonly, copy, nonatomic) NSArray *insertablePasteboardTypes;
- (void)webViewDidEndLiveResize:(id)arg1;
- (void)webViewWillStartLiveResize:(id)arg1;
- (void)saveChangedDocument:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)pasteAsMarkup;
- (void)replaceSelectionWithFragment:(id)arg1;
- (void)addAttachmentsForFiles:(id)arg1;
- (void)redisplayChangedAttachment:(id)arg1;
- (void)viewAttachments:(id)arg1 inLine:(BOOL)arg2;
- (void)removeAttachments:(id)arg1;
- (id)directoryForAttachment:(id)arg1;
@property(readonly, copy, nonatomic) DOMHTMLObjectElement *selectedAttachmentNode;
- (id)attachmentForEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *selectedAttachments;
- (void)replaceRiskyAttachmentsWithLinks;
- (BOOL)removeAttachmentsLeavingPlaceholder:(BOOL)arg1;
- (void)removeAttachment:(id)arg1;
- (void)webView:(id)arg1 willRemoveMailAttachment:(id)arg2;
- (void)webView:(id)arg1 didAddMailAttachment:(id)arg2;
- (void)webViewWillInsertContentsOfWebpage:(id)arg1;
- (BOOL)webViewShouldReplaceSelectionWithContentsOfWebpage:(id)arg1;
- (void)webViewMainDocumentBaseURIDidChange:(id)arg1;
- (id)webView:(id)arg1 shouldReplaceSelectionWithWebArchive:(id)arg2 givenAction:(long long)arg3;
- (id)_validRangeFromSelection:(id)arg1;
- (BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (void)appendAttributedString:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (void)appendParsedMessage:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (void)appendFragment:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
@property(readonly, nonatomic) BOOL isSelectionEditable;
- (void)beginConvertToRichTextAlert:(id)arg1;
- (BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
- (void)webViewDidInsertRichText:(id)arg1;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (void)_checkRichnessForEditedRange:(id)arg1;
- (void)changeComposeModeInBackEndAndView:(long long)arg1;
- (void)_calculateContainsRichText;
- (void)invalidateRichTextCache;
@property(nonatomic) BOOL containsRichText;
- (void)removeAllFormattingFromWebView;
- (BOOL)webView:(id)arg1 canInsertFromPasteboard:(id)arg2 forDrag:(BOOL)arg3;
- (void)setFloat:(id)arg1 ofNode:(id)arg2 inView:(id)arg3 undoTitle:(id)arg4;
- (void)_setFloat:(id)arg1 ofNode:(id)arg2 inView:(id)arg3 undoTitle:(id)arg4;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)insertListWithNumbers:(BOOL)arg1 undoTitle:(id)arg2;
- (void)insertBulletedList:(id)arg1;
- (void)insertNumberedList:(id)arg1;
- (BOOL)_selectionIsInEmptyListItem;
- (BOOL)selectionIsInListTypes:(id)arg1;
@property(readonly, nonatomic) BOOL selectionIsInList;
- (void)changeIndentationIfAllowed:(long long)arg1;
- (void)decreaseIndentation;
- (void)increaseIndentation;
@property(readonly, nonatomic) BOOL allowQuoting;
- (void)insertList:(id)arg1;
- (void)removeSelectedLink;
- (void)editLink;
- (void)editLink:(id)arg1;
- (void)_editLink;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateIgnoredWordsForHeader:(id)arg1;
@property(nonatomic) BOOL finalSpellCheckingIsInProgress;
- (void)finalSpellCheckCompleted:(id)arg1;
- (void)endFinalSpellCheck;
- (BOOL)startFinalSpellCheck;
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)setMessageController:(id)arg1;
@property(readonly, nonatomic) EditableWebMessageDocument *document;
@property(readonly, nonatomic) BOOL useDesignMode;
- (void)close;
- (void)setUp;
- (void)earlySetUp;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
