//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AbstractSketchPlugin/GPBMessage.h>

@class GPBSourceContext, NSMutableArray, NSString;

@interface GPBType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *fieldsArray; // @dynamic fieldsArray;
@property(readonly, nonatomic) unsigned long long fieldsArray_Count; // @dynamic fieldsArray_Count;
@property(nonatomic) BOOL hasSourceContext; // @dynamic hasSourceContext;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *oneofsArray; // @dynamic oneofsArray;
@property(readonly, nonatomic) unsigned long long oneofsArray_Count; // @dynamic oneofsArray_Count;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) GPBSourceContext *sourceContext; // @dynamic sourceContext;
@property(nonatomic) int syntax; // @dynamic syntax;

@end

