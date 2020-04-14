//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSDK/PROAbstractConnection.h>

@class NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface PROAbstractMessageServer : PROAbstractConnection
{
    NSObject<OS_dispatch_source> *_listeningSource;
    NSMutableDictionary *_fdToChannel;
    NSMutableDictionary *_fdToData;
    CDUnknownBlockType _messageReceivedCallback;
}

+ (id)serverForSketchInstance:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType messageReceivedCallback; // @synthesize messageReceivedCallback=_messageReceivedCallback;
@property(retain, nonatomic) NSMutableDictionary *fdToData; // @synthesize fdToData=_fdToData;
@property(retain, nonatomic) NSMutableDictionary *fdToChannel; // @synthesize fdToChannel=_fdToChannel;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listeningSource; // @synthesize listeningSource=_listeningSource;
- (void).cxx_destruct;
- (void)scheduleHealthPing:(id)arg1;
- (void)invalidateOnQueue;
- (void)acceptNewConnection;
- (void)start;
- (void)start:(CDUnknownBlockType)arg1;

@end
