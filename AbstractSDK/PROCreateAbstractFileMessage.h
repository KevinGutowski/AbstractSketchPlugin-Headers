//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSDK/PROSketchMessage.h>

@class NSString;

@interface PROCreateAbstractFileMessage : PROSketchMessage
{
}

@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) NSString *fileIdentifier;
@property(readonly, nonatomic) NSString *abstractFilePath;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSString *name;
- (id)initWithSketchFileURL:(id)arg1 abstractFilePath:(id)arg2 fileIdentifier:(id)arg3 fileName:(id)arg4;

@end

