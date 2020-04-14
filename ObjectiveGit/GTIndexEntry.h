//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTIndex, GTOID, NSString;

@interface GTIndexEntry : NSObject
{
    GTIndex *_index;
    const struct git_index_entry *_git_index_entry;
}

@property(readonly, nonatomic) const struct git_index_entry *git_index_entry; // @synthesize git_index_entry=_git_index_entry;
@property(readonly, nonatomic) GTIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)GTObject:(id *)arg1;
- (id)repository;
@property(readonly, nonatomic) GTOID *OID;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic, getter=isStaged) BOOL staged;
- (int)flags;
@property(readonly, copy, nonatomic) NSString *path;
- (id)initWithGitIndexEntry:(const struct git_index_entry *)arg1;
- (id)initWithGitIndexEntry:(const struct git_index_entry *)arg1 index:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)description;

@end
