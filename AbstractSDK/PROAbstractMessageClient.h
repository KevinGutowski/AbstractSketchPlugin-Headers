//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSDK/PROAbstractConnection.h>

@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_io>;

@interface PROAbstractMessageClient : PROAbstractConnection
{
    BOOL _connected;
    NSDate *_lastHealthPing;
    NSObject<OS_dispatch_io> *_channel;
    CDUnknownBlockType _serverShutdownCallback;
    NSMutableDictionary *_messageCallbacks;
}

+ (id)clientForSketchInstance:(id)arg1 serverShutdown:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *messageCallbacks; // @synthesize messageCallbacks=_messageCallbacks;
@property(copy, nonatomic) CDUnknownBlockType serverShutdownCallback; // @synthesize serverShutdownCallback=_serverShutdownCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *channel; // @synthesize channel=_channel;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NSDate *lastHealthPing; // @synthesize lastHealthPing=_lastHealthPing;
- (void).cxx_destruct;
- (void)invalidateOnQueue;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)connect;

@end

