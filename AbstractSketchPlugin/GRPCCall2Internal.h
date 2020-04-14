//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSketchPlugin/GRPCTransport.h>

@class GRPCCall, GRPCCallOptions, GRPCRequestOptions, GRPCTransportManager, GRXBufferedPipe, NSObject<OS_dispatch_queue>;

@interface GRPCCall2Internal : GRPCTransport
{
    GRPCRequestOptions *_requestOptions;
    GRPCCallOptions *_callOptions;
    GRPCTransportManager *_transportManager;
    GRPCCall *_call;
    BOOL _initialMetadataPublished;
    GRXBufferedPipe *_pipe;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _started;
    BOOL _canceled;
    BOOL _finished;
    unsigned long long _pendingReceiveNextMessages;
}

- (void).cxx_destruct;
- (void)receiveNextMessages:(unsigned long long)arg1;
- (void)issueDidWriteData;
- (void)issueCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)issueMessage:(id)arg1;
- (void)issueInitialMetadata:(id)arg1;
- (void)finish;
- (void)writeData:(id)arg1;
- (void)cancel;
- (void)startWithRequestOptions:(id)arg1 callOptions:(id)arg2;
- (id)dispatchQueue;
- (id)initWithTransportManager:(id)arg1;

@end

