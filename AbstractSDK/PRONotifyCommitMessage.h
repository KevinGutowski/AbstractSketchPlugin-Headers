//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSDK/PROSketchMessage.h>

@class NSArray, NSString;

@interface PRONotifyCommitMessage : PROSketchMessage
{
}

@property(readonly, nonatomic) NSArray *fileIds;
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) NSString *branchId;
@property(readonly, nonatomic) NSString *projectId;
- (id)initWithProjectId:(id)arg1 branchId:(id)arg2 status:(id)arg3 fileIds:(id)arg4;

@end

