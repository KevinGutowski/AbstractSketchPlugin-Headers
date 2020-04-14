//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PROFileWrapperProtocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface PRODrawingItemCollection : NSObject <PROFileWrapperProtocol>
{
    NSMutableArray *_internalItems;
    NSMutableDictionary *_itemsByIdentifier;
}

+ (id)fromFileWrapper:(id)arg1;
+ (id)wrapperKey;
@property(retain, nonatomic) NSMutableDictionary *itemsByIdentifier; // @synthesize itemsByIdentifier=_itemsByIdentifier;
@property(retain, nonatomic) NSMutableArray *internalItems; // @synthesize internalItems=_internalItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items;
- (id)filePathForIdentifier:(id)arg1;
- (id)dataItemForIdentifier:(id)arg1;
- (void)addItem:(id)arg1;
- (id)fileWrapper;
- (id)init;
- (id)preferredFilename;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

