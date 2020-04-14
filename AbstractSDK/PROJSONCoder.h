//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@class NSMutableArray, NSMutableData, NSString, PROSortedKeyMutableDictionary;

@interface PROJSONCoder : NSCoder
{
    NSMutableArray *_stack;
    PROSortedKeyMutableDictionary *_knownObjects;
    PROSortedKeyMutableDictionary *_unresolvedAliases;
    NSString *_keyPath;
    NSMutableData *_data;
}

+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1 pretty:(BOOL)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithJSON:(id)arg1;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)replacements;
+ (id)classNameKey;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) PROSortedKeyMutableDictionary *unresolvedAliases; // @synthesize unresolvedAliases=_unresolvedAliases;
@property(retain, nonatomic) PROSortedKeyMutableDictionary *knownObjects; // @synthesize knownObjects=_knownObjects;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (struct CGSize)decodeSizeForKey:(id)arg1 withDefault:(struct CGSize)arg2;
- (long long)decodeIntegerForKey:(id)arg1 withDefault:(long long)arg2;
- (struct CGPoint)decodePointForKey:(id)arg1 withDefault:(struct CGPoint)arg2;
- (struct CGRect)decodeRectForKey:(id)arg1 withDefault:(struct CGRect)arg2;
- (BOOL)decodeBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (double)decodeDoubleForKey:(id)arg1 withDefault:(double)arg2;
- (id)decodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedObject:(id)arg1 forKey:(id)arg2;
- (BOOL)containsValueForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (void)finishEncoding:(BOOL)arg1 writeData:(BOOL)arg2;
- (void)finishEncoding;
- (id)archiveRootObject:(id)arg1 pretty:(BOOL)arg2;
- (id)archiveRootObject:(id)arg1 pretty:(BOOL)arg2 writeData:(BOOL)arg3;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)finishDecoding;
- (id)unarchiveRootObjectWithJSON:(id)arg1;
- (Class)classForCodedName:(id)arg1;
- (BOOL)unarchiveNumberKeysAsStrings;
- (id)init;

@end

