//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PROFileWrapperProtocol.h"

@class NSMutableDictionary, NSString;

@interface PRODrawingManifest : NSObject <PROFileWrapperProtocol>
{
    NSMutableDictionary *_infoDictionary;
}

+ (id)fromFileWrapper:(id)arg1;
+ (id)wrapperKey;
@property(retain, nonatomic) NSMutableDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (void).cxx_destruct;
- (id)fileWrapper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
