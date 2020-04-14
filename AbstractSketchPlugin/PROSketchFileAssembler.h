//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PRODrawing, PROSketchObjectGraphUtils;

@interface PROSketchFileAssembler : NSObject
{
    PRODrawing *_drawing;
    PROSketchObjectGraphUtils *_objectGraphUtils;
}

@property(retain, nonatomic) PROSketchObjectGraphUtils *objectGraphUtils; // @synthesize objectGraphUtils=_objectGraphUtils;
@property(retain, nonatomic) PRODrawing *drawing; // @synthesize drawing=_drawing;
- (void).cxx_destruct;
- (BOOL)fillInResource:(id)arg1 resources:(id)arg2;
- (void)insertResourceIntoDict:(id)arg1 resources:(id)arg2;
- (void)insertResourcesIntoLayer:(id)arg1 resources:(id)arg2;
- (void)insertResources:(id)arg1;
- (void)insertPagesAndLayers:(id)arg1;
- (void)replaceForeignSymbolOverrideSymbolIds:(id)arg1 withSymbolIdDict:(id)arg2 libraryID:(id)arg3 copyLayers:(BOOL)arg4;
- (void)replaceForeignSymbolInstanceSymbolIds:(id)arg1 withSymbolIdDict:(id)arg2 libraryID:(id)arg3 copyLayers:(BOOL)arg4;
- (void)replaceForeignSymbolInstanceSymbolIds:(id)arg1 withSymbolIdDict:(id)arg2 libraryID:(id)arg3;
- (id)replacementSymbolID:(id)arg1 libraryID:(id)arg2 symbolIDMap:(id)arg3;
- (void)insertForeignSymbols:(id)arg1;
- (void)insertSharedArray:(id)arg1 toPath:(id)arg2 documentData:(id)arg3;
- (void)insertAssetsCollection:(id)arg1;
- (void)insertSymbols:(id)arg1;
- (void)insertLayerStyles:(id)arg1;
- (void)insertTextStyles:(id)arg1;
- (id)insertUserPreferences:(id)arg1 identifier:(id)arg2;
- (void)insertDocumentData:(id)arg1;
- (id)readFile;
- (id)documentVersionForDisplayVersion:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (id)initWithAbstractFile:(id)arg1;

@end
