//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

@class NSFileWrapper;

@interface PRODrawingDocument : NSDocument
{
    BOOL _saveSynchronously;
    NSFileWrapper *_wrapper;
}

+ (id)primaryType;
+ (BOOL)autosavesInPlace;
@property(nonatomic) BOOL saveSynchronously; // @synthesize saveSynchronously=_saveSynchronously;
@property(retain, nonatomic) NSFileWrapper *wrapper; // @synthesize wrapper=_wrapper;
- (void).cxx_destruct;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (id)initWithWrapper:(id)arg1;

@end
