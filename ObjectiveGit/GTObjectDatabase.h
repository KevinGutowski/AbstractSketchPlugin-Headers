//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTRepository;

@interface GTObjectDatabase : NSObject
{
    GTRepository *_repository;
    struct git_odb *_git_odb;
}

@property(readonly, nonatomic) struct git_odb *git_odb; // @synthesize git_odb=_git_odb;
@property(readonly, nonatomic) GTRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (BOOL)containsObjectWithOID:(id)arg1;
- (BOOL)containsObjectWithSHA:(id)arg1 error:(id *)arg2;
- (id)writeData:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (id)objectWithSHA:(id)arg1 error:(id *)arg2;
- (id)objectWithOID:(id)arg1 error:(id *)arg2;
- (id)initWithRepository:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)dealloc;
- (id)description;

@end
