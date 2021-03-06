//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PROReporter.h"

@class NSObject<OS_dispatch_queue>, PRORPCTraceService, PROSketchURLManager, PROTracer;

@interface PROAbstractdReporter : NSObject <PROReporter>
{
    int _errCount;
    PROTracer *_tracer;
    PROSketchURLManager *_urlManager;
    PRORPCTraceService *_service;
    NSObject<OS_dispatch_queue> *_reporterQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reporterQueue; // @synthesize reporterQueue=_reporterQueue;
@property(nonatomic) int errCount; // @synthesize errCount=_errCount;
@property(retain, nonatomic) PRORPCTraceService *service; // @synthesize service=_service;
@property(retain, nonatomic) PROSketchURLManager *urlManager; // @synthesize urlManager=_urlManager;
@property(retain, nonatomic) PROTracer *tracer; // @synthesize tracer=_tracer;
- (void).cxx_destruct;
- (void)reportSpan:(id)arg1;
- (id)initWithTracer:(id)arg1 urlManager:(id)arg2;

@end

