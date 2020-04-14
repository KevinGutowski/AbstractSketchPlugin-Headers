//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSketchPlugin/GPBMessage.h>

@class GPBSourceContext, NSMutableArray, NSString;

@interface GPBApi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasSourceContext; // @dynamic hasSourceContext;
@property(retain, nonatomic) NSMutableArray *methodsArray; // @dynamic methodsArray;
@property(readonly, nonatomic) unsigned long long methodsArray_Count; // @dynamic methodsArray_Count;
@property(retain, nonatomic) NSMutableArray *mixinsArray; // @dynamic mixinsArray;
@property(readonly, nonatomic) unsigned long long mixinsArray_Count; // @dynamic mixinsArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) GPBSourceContext *sourceContext; // @dynamic sourceContext;
@property(nonatomic) int syntax; // @dynamic syntax;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

