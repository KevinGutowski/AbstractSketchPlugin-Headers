//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OTSpan.h"

@interface OTNoopSpan : NSObject <OTSpan>
{
}

- (void)finishWithTime:(id)arg1;
- (void)finish;
- (id)getBaggageItem:(id)arg1;
- (id)setBaggageItem:(id)arg1 value:(id)arg2;
- (void)log:(id)arg1 timestamp:(id)arg2 payload:(id)arg3;
- (void)logEvent:(id)arg1 payload:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)log:(id)arg1 timestamp:(id)arg2;
- (void)log:(id)arg1;
- (void)setTag:(id)arg1 boolValue:(BOOL)arg2;
- (void)setTag:(id)arg1 numberValue:(id)arg2;
- (void)setTag:(id)arg1 value:(id)arg2;
- (void)setOperationName:(id)arg1;
- (id)context;
- (id)tracer;

@end

