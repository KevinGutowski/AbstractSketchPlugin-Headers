//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class GTRepository;

@interface GTEnumerator : NSEnumerator
{
    unsigned int _options;
    GTRepository *_repository;
    struct git_revwalk *_walk;
}

@property(readonly, nonatomic) struct git_revwalk *walk; // @synthesize walk=_walk;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(readonly, nonatomic) GTRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (id)description;
- (id)nextObject;
- (id)allObjects;
- (unsigned long long)countRemainingObjects:(id *)arg1;
- (id)allObjectsWithError:(id *)arg1;
- (id)nextObjectWithSuccess:(char *)arg1 error:(id *)arg2;
- (id)nextOIDWithSuccess:(char *)arg1 error:(id *)arg2;
- (void)resetWithOptions:(unsigned int)arg1;
- (BOOL)hideReferenceName:(id)arg1 error:(id *)arg2;
- (BOOL)hideHEAD:(id *)arg1;
- (BOOL)hideGlob:(id)arg1 error:(id *)arg2;
- (BOOL)hideSHA:(id)arg1 error:(id *)arg2;
- (BOOL)pushReferenceName:(id)arg1 error:(id *)arg2;
- (BOOL)pushHEAD:(id *)arg1;
- (BOOL)pushGlob:(id)arg1 error:(id *)arg2;
- (BOOL)pushSHA:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 error:(id *)arg2;
- (struct git_revwalk *)git_revwalk;
- (id)init;

@end
