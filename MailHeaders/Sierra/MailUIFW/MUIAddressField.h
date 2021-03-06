//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

#import "CNAutocompleteFetchDelegate.h"
#import "CNAutocompleteResultWindowDelegate.h"
#import "CNContactPickerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTokenFieldDelegate.h"

@class CNAutocompleteResult, CNAutocompleteResultWindow, CNAutocompleteStore, MUITokenAddressField, NSArray, NSButton, NSLayoutConstraint, NSMapTable, NSMutableArray, NSScrollView, NSString;

@interface MUIAddressField : NSControl <CNAutocompleteResultWindowDelegate, CNAutocompleteFetchDelegate, CNContactPickerDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTokenFieldDelegate>
{
    SEL _action;	// 176 = 0xb0
    id _target;	// 184 = 0xb8
    long long _style;	// 192 = 0xc0
    NSMutableArray *_completionResults;	// 200 = 0xc8
    BOOL _ignoreCompletionForTextChange;	// 208 = 0xd0
    BOOL _isShowingContactPicker;	// 209 = 0xd1
    BOOL _shouldDrawFocusRing;	// 210 = 0xd2
    BOOL _isBoundToTokenField;	// 211 = 0xd3
    BOOL _isShowingSelectedCompletion;	// 212 = 0xd4
    NSString *_accountIdentifier;	// 216 = 0xd8
    NSString *_senderAddress;	// 224 = 0xe0
    NSString *_senderDomain;	// 232 = 0xe8
    id <MUIAddressFieldContextProvider> _delegate;	// 240 = 0xf0
    id <MUIAddressFieldSenderAddressHandler> _senderAddressHandler;	// 248 = 0xf8
    NSScrollView *_scrollView;	// 256 = 0x100
    MUITokenAddressField *_tokenField;	// 264 = 0x108
    NSButton *_addContactButton;	// 272 = 0x110
    CNAutocompleteResultWindow *_autocompleteResultWindow;	// 280 = 0x118
    CNAutocompleteStore *_autocompleteStore;	// 288 = 0x120
    CNAutocompleteResult *_selectedResult;	// 296 = 0x128
    NSArray *_relevantPeopleResults;	// 304 = 0x130
    id <CNCancelable> _currentSearchRequest;	// 312 = 0x138
    id <CNCancelable> _lastSuccessfulSearchRequest;	// 320 = 0x140
    NSString *_currentPrefix;	// 328 = 0x148
    long long _addressDisplayMode;	// 336 = 0x150
    id _tokenValue;	// 344 = 0x158
    NSLayoutConstraint *_addContactButtonTrailingConstraint;	// 352 = 0x160
    NSLayoutConstraint *_tokenFieldTrailingConstraint;	// 360 = 0x168
    NSLayoutConstraint *_tokenFieldBottomConstraint;	// 368 = 0x170
    NSLayoutConstraint *_addressFieldHeightConstraint;	// 376 = 0x178
    NSMapTable *_representedObjectsCache;	// 384 = 0x180
    id <MUITokenAddressDelegate> _tokenAddressDelegate;	// 392 = 0x188
    NSString *_lastSendingAddress;	// 400 = 0x190
    NSString *_previousPrimaryAddress;	// 408 = 0x198
    struct _NSRange _editingRange;	// 416 = 0x1a0
}

+ (id)_contactPicker;	// IMP=0x000000000000a1be
+ (id)readablePasteboardTypes;	// IMP=0x000000000000717c
+ (id)keyPathsForValuesAffectingAddresses;	// IMP=0x0000000000003c97
@property(copy, nonatomic) NSString *previousPrimaryAddress; // @synthesize previousPrimaryAddress=_previousPrimaryAddress;
@property(copy, nonatomic) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property(nonatomic) BOOL isShowingSelectedCompletion; // @synthesize isShowingSelectedCompletion=_isShowingSelectedCompletion;
@property(nonatomic) BOOL isBoundToTokenField; // @synthesize isBoundToTokenField=_isBoundToTokenField;
@property(retain, nonatomic) id <MUITokenAddressDelegate> tokenAddressDelegate; // @synthesize tokenAddressDelegate=_tokenAddressDelegate;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(retain, nonatomic) NSMapTable *representedObjectsCache; // @synthesize representedObjectsCache=_representedObjectsCache;
@property(retain, nonatomic) NSLayoutConstraint *addressFieldHeightConstraint; // @synthesize addressFieldHeightConstraint=_addressFieldHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tokenFieldBottomConstraint; // @synthesize tokenFieldBottomConstraint=_tokenFieldBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tokenFieldTrailingConstraint; // @synthesize tokenFieldTrailingConstraint=_tokenFieldTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *addContactButtonTrailingConstraint; // @synthesize addContactButtonTrailingConstraint=_addContactButtonTrailingConstraint;
@property(nonatomic) BOOL isShowingContactPicker; // @synthesize isShowingContactPicker=_isShowingContactPicker;
@property(retain, nonatomic) id tokenValue; // @synthesize tokenValue=_tokenValue;
@property(nonatomic) long long addressDisplayMode; // @synthesize addressDisplayMode=_addressDisplayMode;
@property(nonatomic) BOOL ignoreCompletionForTextChange; // @synthesize ignoreCompletionForTextChange=_ignoreCompletionForTextChange;
@property(nonatomic) struct _NSRange editingRange; // @synthesize editingRange=_editingRange;
@property(copy, nonatomic) NSString *currentPrefix; // @synthesize currentPrefix=_currentPrefix;
@property(retain, nonatomic) id <CNCancelable> lastSuccessfulSearchRequest; // @synthesize lastSuccessfulSearchRequest=_lastSuccessfulSearchRequest;
@property(retain, nonatomic) id <CNCancelable> currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property(copy, nonatomic) NSArray *relevantPeopleResults; // @synthesize relevantPeopleResults=_relevantPeopleResults;
@property(retain, nonatomic) CNAutocompleteResult *selectedResult; // @synthesize selectedResult=_selectedResult;
@property(readonly, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(retain, nonatomic) CNAutocompleteResultWindow *autocompleteResultWindow; // @synthesize autocompleteResultWindow=_autocompleteResultWindow;
@property(retain, nonatomic) NSButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain, nonatomic) MUITokenAddressField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <MUIAddressFieldSenderAddressHandler> senderAddressHandler; // @synthesize senderAddressHandler=_senderAddressHandler;
@property(nonatomic) __weak id <MUIAddressFieldContextProvider> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *senderDomain; // @synthesize senderDomain=_senderDomain;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;	// IMP=0x000000000000b14e
- (id)accessibilityChildren;	// IMP=0x000000000000ab5a
- (void)setAccessibilityTitleUIElement:(id)arg1;	// IMP=0x000000000000aa74
- (void)drawFocusRingMask;	// IMP=0x000000000000aa28
- (struct CGRect)focusRingMaskBounds;	// IMP=0x000000000000a9c6
- (BOOL)_addressFieldNeedsToBeScrollable;	// IMP=0x000000000000a968
- (void)_resizeFieldIfNeeded;	// IMP=0x000000000000a743
- (void)updateConstraints;	// IMP=0x000000000000a6ec
- (BOOL)_hasFocus;	// IMP=0x000000000000a639
- (void)contactPickerDidClose:(id)arg1;	// IMP=0x000000000000a5c6
- (void)contactPickerWillClose:(id)arg1;	// IMP=0x000000000000a5b2
- (void)contactPicker:(id)arg1 didChooseCompatibilityContact:(id)arg2 key:(id)arg3 value:(id)arg4;	// IMP=0x000000000000a3aa
- (void)_showContactPicker:(id)arg1;	// IMP=0x000000000000a2a0
- (void)_tokenFieldGainedFocus:(id)arg1;	// IMP=0x000000000000a0c7
- (void)_tokenFieldMouseAction:(id)arg1;	// IMP=0x000000000000a068
- (void)_updateSenderAddressHandler;	// IMP=0x0000000000009e2f
- (struct CGRect)_adjustedFrameForAutocompleteResultWindow;	// IMP=0x0000000000009aa8
- (void)setFrameSize:(struct CGSize)arg1;	// IMP=0x0000000000009a22
- (void)_windowDidResize:(id)arg1;	// IMP=0x00000000000099b9
- (void)_completeSelection:(id)arg1;	// IMP=0x00000000000098dc
- (void)_presentAutocompletionResultWindow;	// IMP=0x0000000000009788
- (id)_completionStringForSelectedRecord;	// IMP=0x00000000000084a1
- (BOOL)_allowNextPeoplePrediction;	// IMP=0x0000000000008413
- (void)_displayNextPeoplePrediction;	// IMP=0x0000000000008323
- (BOOL)tokenField:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3;	// IMP=0x0000000000008193
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;	// IMP=0x0000000000007223
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;	// IMP=0x0000000000007097
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;	// IMP=0x0000000000006fed
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;	// IMP=0x0000000000006fe2
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;	// IMP=0x0000000000006edc
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;	// IMP=0x0000000000006e39
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;	// IMP=0x0000000000006d7f
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000006cb3
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;	// IMP=0x00000000000067fd
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;	// IMP=0x000000000000655e
- (void)objectDidEndEditing:(id)arg1;	// IMP=0x00000000000064a4
- (void)objectDidBeginEditing:(id)arg1;	// IMP=0x00000000000063ea
- (void)_objectDidTriggerAction:(id)arg1;	// IMP=0x0000000000006305
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;	// IMP=0x0000000000005e97
- (void)controlTextDidEndEditing:(id)arg1;	// IMP=0x0000000000005b56
- (void)controlTextDidChange:(id)arg1;	// IMP=0x0000000000005835
- (void)_updateEditingRange;	// IMP=0x000000000000579f
- (id)_editingStringWithRange:(struct _NSRange *)arg1;	// IMP=0x0000000000005593
- (BOOL)canBecomeKeyView;	// IMP=0x000000000000558b
- (void)setNextKeyView:(id)arg1;	// IMP=0x00000000000054f6
- (void)setTarget:(id)arg1;	// IMP=0x00000000000054a5
- (id)target;	// IMP=0x0000000000005490
- (void)setAction:(SEL)arg1;	// IMP=0x000000000000547f
- (SEL)action;	// IMP=0x000000000000546e
@property(nonatomic) long long style;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;	// IMP=0x00000000000051ba
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;	// IMP=0x00000000000051b4
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000000519d
- (void)autocompleteFetchDidFinish:(id)arg1;	// IMP=0x0000000000004fe5
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;	// IMP=0x0000000000004b6a
- (id)headerForNilPrefixResults;	// IMP=0x0000000000004b62
- (void)selectionDidChange:(id)arg1;	// IMP=0x0000000000004a80
- (void)selectedResult:(id)arg1;	// IMP=0x000000000000486c
- (void)_tokenFieldCommitedEditing:(id)arg1;	// IMP=0x00000000000047fd
- (id)_tokensWithGroupTokensExpanded:(id)arg1;	// IMP=0x00000000000043cb
- (void)_addAddress:(id)arg1 contact:(id)arg2;	// IMP=0x000000000000426e
@property(retain, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSArray *rawAddresses;
- (void)_refreshAddressDisplayMode;	// IMP=0x00000000000037fd
- (void)_sharedPreferencesChanged:(id)arg1;	// IMP=0x00000000000037ab
- (void)_showSelectedCompletionInField;	// IMP=0x0000000000003561
- (void)_updateSelectedResultAndShowInField:(id)arg1;	// IMP=0x00000000000034e6
- (void)_cancelAndCloseCompletion;	// IMP=0x00000000000032d6
- (void)_cancelCompletion;	// IMP=0x0000000000003215
- (void)_startCompleting;	// IMP=0x0000000000002dc9
- (void)_updateTrailingConstraints;	// IMP=0x0000000000002c65
- (void)_scrollerStyleDidChange:(id)arg1;	// IMP=0x0000000000002c53
- (void)_configureConstraints;	// IMP=0x0000000000002786
- (id)_addContactImage;	// IMP=0x00000000000026be
- (void)_configureAddContactButton;	// IMP=0x000000000000250a
- (void)_configureTokenField;	// IMP=0x000000000000226e
- (void)_configureScrollView;	// IMP=0x00000000000020e6
- (void)_windowDidChangeKeyStatus:(id)arg1;	// IMP=0x000000000000204d
- (void)bindOrUnbindToTokenField:(BOOL)arg1;	// IMP=0x0000000000001eed
- (void)viewDidMoveToSuperview;	// IMP=0x0000000000001e78
- (void)removeFromSuperview;	// IMP=0x0000000000001d59
- (void)viewDidMoveToWindow;	// IMP=0x0000000000001c39
- (void)_registerForNotifications;	// IMP=0x0000000000001b10
- (void)setEnabled:(BOOL)arg1;	// IMP=0x0000000000001a85
- (void)dealloc;	// IMP=0x00000000000017f6
- (void)_muiAddressFieldCommonInit;	// IMP=0x00000000000016eb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000016a6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000163e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

