//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSCacheDelegate.h"

@class MessageListContentController, NSCache, NSString, NSTableView, NSTimer;

@interface ConversationPrefetcher : NSObject <NSCacheDelegate>
{
    NSCache *_prefetchedConversations;	// 8 = 0x8
    MessageListContentController *_messageListContentController;	// 16 = 0x10
    NSTableView *_messagesTableView;	// 24 = 0x18
    NSTimer *_prefetchTimer;	// 32 = 0x20
}

@property(retain, nonatomic) NSTimer *prefetchTimer; // @synthesize prefetchTimer=_prefetchTimer;
@property(retain, nonatomic) NSTableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
@property(retain, nonatomic) MessageListContentController *messageListContentController; // @synthesize messageListContentController=_messageListContentController;
@property(retain, nonatomic) NSCache *prefetchedConversations; // @synthesize prefetchedConversations=_prefetchedConversations;
- (void).cxx_destruct;	// IMP=0x000000010012dbbc
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x000000010012d83d
- (void)_prefetchVisibleConversations:(id)arg1;	// IMP=0x000000010012d0b4
- (id)cachedConversationForID:(long long)arg1;	// IMP=0x000000010012d02d
- (void)_armTimerWithDelay:(double)arg1;	// IMP=0x000000010012ce73
- (void)_tableViewScrolled:(id)arg1;	// IMP=0x000000010012ce59
- (void)_messageListChanged:(id)arg1;	// IMP=0x000000010012ce3f
- (void)dealloc;	// IMP=0x000000010012cdb2
- (id)init;	// IMP=0x000000010012cce3
- (id)initWithMessageListContentController:(id)arg1 messagesTableView:(id)arg2;	// IMP=0x000000010012cb36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
