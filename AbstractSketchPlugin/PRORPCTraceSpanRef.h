//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSketchPlugin/GPBMessage.h>

@class NSString;

@interface PRORPCTraceSpanRef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int refType; // @dynamic refType;
@property(copy, nonatomic) NSString *spanId; // @dynamic spanId;
@property(copy, nonatomic) NSString *traceId; // @dynamic traceId;

@end

