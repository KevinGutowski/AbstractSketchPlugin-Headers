//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSArray;

@interface PROSortedKeyEnumerator : NSEnumerator
{
    long long _counter;
    NSArray *_sortedKeys;
}

@property(retain, nonatomic) NSArray *sortedKeys; // @synthesize sortedKeys=_sortedKeys;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
- (void).cxx_destruct;
- (id)nextObject;
- (id)allObjects;
- (id)initWithDictionary:(id)arg1;

@end

