//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, PRORPCTraceSpanRequest;

@protocol PRORPCTraceService2 <NSObject>
- (GRPCUnaryProtoCall *)spanWithMessage:(PRORPCTraceSpanRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

