//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PROGitController;

@interface PROAbstractCacheFileCreator : NSObject
{
    NSString *_projectId;
    NSString *_commitSha;
    NSString *_fileId;
    NSString *_fileTreeSha;
    PROGitController *_gitController;
}

+ (id)cleanupQueue;
@property(retain, nonatomic) PROGitController *gitController; // @synthesize gitController=_gitController;
@property(copy, nonatomic) NSString *fileTreeSha; // @synthesize fileTreeSha=_fileTreeSha;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *commitSha; // @synthesize commitSha=_commitSha;
@property(copy, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;
- (void).cxx_destruct;
- (void)cleanupCache;
- (id)readDocument;
- (void)removeCacheFile;
- (id)cacheURL;
- (void)createCacheEntryAndReturnCreatedDocument:(CDUnknownBlockType)arg1;
- (void)createCacheEntry:(CDUnknownBlockType)arg1;
- (id)initWithProjectId:(id)arg1 commitSha:(id)arg2 fileId:(id)arg3 gitController:(id)arg4;

@end

