//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GTFilterList : NSObject
{
    struct git_filter_list *_git_filter_list;
}

@property(readonly, nonatomic) struct git_filter_list *git_filter_list; // @synthesize git_filter_list=_git_filter_list;
- (id)applyToBlob:(id)arg1 error:(id *)arg2;
- (id)applyToPath:(id)arg1 inRepository:(id)arg2 error:(id *)arg3;
- (id)applyToData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithGitFilterList:(struct git_filter_list *)arg1;
- (id)init;

@end

