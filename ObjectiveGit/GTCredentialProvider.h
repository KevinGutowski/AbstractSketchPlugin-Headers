//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GTCredentialProvider : NSObject
{
    CDUnknownBlockType _credBlock;
}

+ (id)providerWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType credBlock; // @synthesize credBlock=_credBlock;
- (void).cxx_destruct;
- (id)credentialForType:(long long)arg1 URL:(id)arg2 userName:(id)arg3;

@end

