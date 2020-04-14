//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDocument, NSNumber, NSString;

@interface PROSketchAbstractMetadata : NSObject
{
    MSDocument *_document;
    NSString *_name;
    NSString *_savePath;
    NSString *_branchId;
    NSString *_fileId;
    NSString *_branchName;
    NSString *_projectId;
    NSString *_projectName;
    NSString *_baseSHA;
    NSString *_fileTreeSHA;
    NSNumber *_abstractFileVersion;
}

+ (id)metadataWithURL:(id)arg1;
+ (id)metadataWithExistingDocument:(id)arg1 commander:(id)arg2;
+ (id)metadataWithDrawing:(id)arg1 fromMessage:(id)arg2;
+ (id)metadataWithReadResult:(id)arg1 fromOpenMessage:(id)arg2;
@property(copy, nonatomic) NSNumber *abstractFileVersion; // @synthesize abstractFileVersion=_abstractFileVersion;
@property(copy, nonatomic) NSString *fileTreeSHA; // @synthesize fileTreeSHA=_fileTreeSHA;
@property(copy, nonatomic) NSString *baseSHA; // @synthesize baseSHA=_baseSHA;
@property(copy, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
@property(copy, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;
@property(copy, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *branchId; // @synthesize branchId=_branchId;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)attributeNames;
- (const char *)xattrKey:(id)arg1;
- (void)mapDictionary:(id)arg1;
- (void)readMetadata:(id)arg1;
- (id)readMetadataFromURL:(id)arg1;
- (id)toDictionary;
- (void)saveToUrl:(id)arg1;
- (void)addToDocument:(id)arg1 commander:(id)arg2;
- (void)saveToDocumentWithCommander:(id)arg1;
@property(readonly, nonatomic) NSString *actualSHA;
- (id)description;
- (id)gitController;
- (id)repoOutOfSyncError;
- (BOOL)repoIsOutOfSync;
- (BOOL)isFromLegacyAbstractFile;
- (BOOL)isReadOnly;
- (id)baseFileName;
- (id)shortSha;
- (id)metadataKey;

@end
