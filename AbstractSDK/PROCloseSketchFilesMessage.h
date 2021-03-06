//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSDK/PROSketchMessage.h>

@class NSArray, NSString;

@interface PROCloseSketchFilesMessage : PROSketchMessage
{
}

@property(readonly, nonatomic) NSArray *fileIds;
@property(readonly, nonatomic) BOOL closeReadOnly;
@property(readonly, nonatomic) BOOL saveFiles;
@property(readonly, nonatomic) NSString *projectId;
@property(readonly, nonatomic) NSString *branchId;
- (id)initWithProjectId:(id)arg1 branchId:(id)arg2 saveFiles:(BOOL)arg3 closeReadOnly:(BOOL)arg4 fileIds:(id)arg5;

@end

