//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDocument, NSMutableDictionary, NSMutableSet, PROSketchAbstractMetadata, PROSketchURLManager;

@interface PRONestedSymbolFixer : NSObject
{
    PROSketchURLManager *_urlManager;
    MSDocument *_doc;
    PROSketchAbstractMetadata *_meta;
    NSMutableDictionary *_fixResults;
    NSMutableDictionary *_libraryCache;
    NSMutableDictionary *_libraryMetas;
    NSMutableDictionary *_libraryFixResults;
    NSMutableDictionary *_originalSymbolIdToSymbolId;
    NSMutableDictionary *_symbolIdToOriginalSymbolId;
    NSMutableSet *_originalSymbolIds;
    NSMutableSet *_symbolIds;
    NSMutableDictionary *_importedForeignSymbols;
    NSMutableDictionary *_orphanedObjectIdToSymbolId;
}

+ (void)fixForeignSymbolNestedSymbols:(id)arg1;
+ (id)forDoc:(id)arg1 libraryCache:(id)arg2;
+ (id)forDoc:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *orphanedObjectIdToSymbolId; // @synthesize orphanedObjectIdToSymbolId=_orphanedObjectIdToSymbolId;
@property(retain, nonatomic) NSMutableDictionary *importedForeignSymbols; // @synthesize importedForeignSymbols=_importedForeignSymbols;
@property(retain, nonatomic) NSMutableSet *symbolIds; // @synthesize symbolIds=_symbolIds;
@property(retain, nonatomic) NSMutableSet *originalSymbolIds; // @synthesize originalSymbolIds=_originalSymbolIds;
@property(retain, nonatomic) NSMutableDictionary *symbolIdToOriginalSymbolId; // @synthesize symbolIdToOriginalSymbolId=_symbolIdToOriginalSymbolId;
@property(retain, nonatomic) NSMutableDictionary *originalSymbolIdToSymbolId; // @synthesize originalSymbolIdToSymbolId=_originalSymbolIdToSymbolId;
@property(retain, nonatomic) NSMutableDictionary *libraryFixResults; // @synthesize libraryFixResults=_libraryFixResults;
@property(retain, nonatomic) NSMutableDictionary *libraryMetas; // @synthesize libraryMetas=_libraryMetas;
@property(retain, nonatomic) NSMutableDictionary *libraryCache; // @synthesize libraryCache=_libraryCache;
@property(retain, nonatomic) NSMutableDictionary *fixResults; // @synthesize fixResults=_fixResults;
@property(retain, nonatomic) PROSketchAbstractMetadata *meta; // @synthesize meta=_meta;
@property(retain, nonatomic) MSDocument *doc; // @synthesize doc=_doc;
@property(retain, nonatomic) PROSketchURLManager *urlManager; // @synthesize urlManager=_urlManager;
- (void).cxx_destruct;
- (BOOL)metaIsInSameBranch:(id)arg1;
- (void)openMoreInfo;
- (void)replaceLayerOverrideSymbolIds:(id)arg1 foreignSymbols:(id)arg2 objectId:(id)arg3 validSymbolIds:(id)arg4;
- (void)replaceLayerInstanceSymbolIds:(id)arg1 foreignSymbols:(id)arg2 validSymbolIds:(id)arg3;
- (id)findOrAddReplacementSymbol:(id)arg1 objectId:(id)arg2;
- (id)findReplacementSymbolId:(id)arg1 libraryId:(id)arg2 objectId:(id)arg3;
- (void)loadLibraries;
- (void)replaceForeignSymbolOverrideSymbolIds:(id)arg1 libraryId:(id)arg2 objectId:(id)arg3 symbolIdMap:(id)arg4 validSymbolIds:(id)arg5;
- (void)replaceForeignSymbolInstanceSymbolIds:(id)arg1 libraryId:(id)arg2 symbolIdMap:(id)arg3 validSymbolIds:(id)arg4;
- (void)_fixForeignSymbolNestedSymbols;
- (void)fixForeignSymbolNestedSymbols;

@end

