//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPCommand.h>

@class NSArray;

@interface IMAPAggregateCommand : IMAPCommand
{
    NSArray *_commands;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSArray *commands; // @synthesize commands=_commands;
- (void).cxx_destruct;	// IMP=0x000000000000f4d6
- (void)cleanupAfterCompletion;	// IMP=0x000000000000f391
- (long long)composition;	// IMP=0x000000000000f386
- (id)init;	// IMP=0x000000000000f2b7
- (id)initWithCommands:(id)arg1;	// IMP=0x000000000000f23c

@end

