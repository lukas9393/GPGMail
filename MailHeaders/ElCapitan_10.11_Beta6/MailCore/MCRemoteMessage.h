/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MailCore/MCMessage.h>

@interface MCRemoteMessage : MCMessage
{
    CDStruct_07ba05d6 _remoteFlags;
    unsigned long long _messageSize;
}

@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(nonatomic) CDStruct_07ba05d6 remoteFlags; // @synthesize remoteFlags=_remoteFlags;
@property(nonatomic) BOOL hasTemporaryUid;
- (BOOL)isMessageContentLocallyAvailable;
@property(nonatomic) BOOL partsHaveBeenCached;
@property(nonatomic) BOOL isPartial;
- (id)initWithSize:(unsigned long long)arg1;

@end
