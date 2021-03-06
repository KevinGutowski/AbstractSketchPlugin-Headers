//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OTSpan.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, PROSpanContext, PROTracer;

@interface PROSpan : NSObject <OTSpan>
{
    PROTracer *_tracer;
    PROSpanContext *_context;
    NSString *_operationName;
    NSDate *_startTime;
    double _duration;
    NSMutableDictionary *_tags;
    NSMutableArray *_logs;
    NSMutableArray *_references;
}

@property(readonly, nonatomic) NSMutableArray *references; // @synthesize references=_references;
@property(readonly, nonatomic) NSMutableArray *logs; // @synthesize logs=_logs;
@property(readonly, nonatomic) NSMutableDictionary *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
- (void).cxx_destruct;
- (id)toRPC;
- (void)log:(id)arg1 timestamp:(id)arg2 payload:(id)arg3;
- (void)logEvent:(id)arg1 payload:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)finishWithTime:(id)arg1;
- (void)finish;
- (id)getBaggageItem:(id)arg1;
- (id)setBaggageItem:(id)arg1 value:(id)arg2;
- (void)log:(id)arg1 timestamp:(id)arg2;
- (void)log:(id)arg1;
- (void)setTag:(id)arg1 boolValue:(BOOL)arg2;
- (void)setTag:(id)arg1 binaryValue:(id)arg2;
- (void)setTag:(id)arg1 numberValue:(id)arg2;
- (void)setTag:(id)arg1 doubleValue:(double)arg2;
- (void)setTag:(id)arg1 longValue:(long long)arg2;
- (void)setTag:(id)arg1 value:(id)arg2;
- (void)setOperationName:(id)arg1;
@property(readonly, nonatomic) PROTracer *tracer; // @synthesize tracer=_tracer;
@property(readonly, nonatomic) PROSpanContext *context; // @synthesize context=_context;
- (id)description;
- (id)initWithTracer:(id)arg1 operationName:(id)arg2 tags:(id)arg3 references:(id)arg4 startTime:(id)arg5;

@end

