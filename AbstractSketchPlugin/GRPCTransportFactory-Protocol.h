//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GRPCTransport, GRPCTransportManager;

@protocol GRPCTransportFactory <NSObject>
- (GRPCTransport *)createTransportWithManager:(GRPCTransportManager *)arg1;
@end

