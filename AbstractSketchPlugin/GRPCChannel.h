//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GRPCChannelConfiguration;

@interface GRPCChannel : NSObject
{
    GRPCChannelConfiguration *_configuration;
    struct grpc_channel *_unmanagedChannel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct grpc_call *)unmanagedCallWithPath:(id)arg1 completionQueue:(id)arg2 callOptions:(id)arg3;
- (id)initWithChannelConfiguration:(id)arg1;

@end

