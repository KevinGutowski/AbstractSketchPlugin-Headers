//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PROSketchAbstractFileLiaison : NSObject
{
}

+ (void)createLibraryWithMeta:(id)arg1 repoUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fileIdForPath:(id)arg1;
- (void)upgradeFilesAtPaths:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)upgradeFiles:(id)arg1 gitController:(id)arg2 projectID:(id)arg3 sha:(id)arg4 message:(id)arg5 progress:(CDUnknownBlockType)arg6;
- (void)upgradeFiles:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)readFileForGeneratePreviewsMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readFileForExportBitmapsMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openFile:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
