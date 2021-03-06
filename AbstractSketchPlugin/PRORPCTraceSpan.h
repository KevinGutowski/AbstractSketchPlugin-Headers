//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSketchPlugin/GPBMessage.h>

@class NSMutableArray, NSString, PRORPCTraceTimestamp;

@interface PRORPCTraceSpan : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) int flags; // @dynamic flags;
@property(nonatomic) BOOL hasStartTime; // @dynamic hasStartTime;
@property(retain, nonatomic) NSMutableArray *logsArray; // @dynamic logsArray;
@property(readonly, nonatomic) unsigned long long logsArray_Count; // @dynamic logsArray_Count;
@property(copy, nonatomic) NSString *operationName; // @dynamic operationName;
@property(copy, nonatomic) NSString *parentId; // @dynamic parentId;
@property(retain, nonatomic) NSMutableArray *referencesArray; // @dynamic referencesArray;
@property(readonly, nonatomic) unsigned long long referencesArray_Count; // @dynamic referencesArray_Count;
@property(copy, nonatomic) NSString *serviceName; // @dynamic serviceName;
@property(copy, nonatomic) NSString *spanId; // @dynamic spanId;
@property(retain, nonatomic) PRORPCTraceTimestamp *startTime; // @dynamic startTime;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;
@property(copy, nonatomic) NSString *traceId; // @dynamic traceId;

@end

