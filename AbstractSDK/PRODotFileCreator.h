//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableString, PRODrawing, PROSketchObjectGraphUtils;

@interface PRODotFileCreator : NSObject
{
    PRODrawing *_drawing;
    NSMutableString *_dotFile;
    NSMutableDictionary *_dependencies;
    PROSketchObjectGraphUtils *_objectGraphUtils;
}

@property(retain, nonatomic) PROSketchObjectGraphUtils *objectGraphUtils; // @synthesize objectGraphUtils=_objectGraphUtils;
@property(retain, nonatomic) NSMutableDictionary *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) NSMutableString *dotFile; // @synthesize dotFile=_dotFile;
@property(retain, nonatomic) PRODrawing *drawing; // @synthesize drawing=_drawing;
- (void).cxx_destruct;
- (void)addDependency:(id)arg1 to:(id)arg2;
- (void)addNode:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)addLayerStyles:(id)arg1 drawing:(id)arg2 rootIdentifier:(id)arg3;
- (id)createDotFile;
- (id)initWithDrawing:(id)arg1;

@end
