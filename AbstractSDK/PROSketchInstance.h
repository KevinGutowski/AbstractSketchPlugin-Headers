//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PROSketchInstance : NSObject
{
    NSString *_bundleId;
    NSString *_appName;
    NSString *_appVariant;
}

+ (id)privateSketch;
+ (id)betaSketch;
+ (id)stableSketch;
+ (id)hostSketch;
@property(copy, nonatomic) NSString *appVariant; // @synthesize appVariant=_appVariant;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (void)ensurePluginEnabled;
- (BOOL)isRunning:(int)arg1;
- (void)quitAndWait:(int)arg1;
- (void)quit;
- (void)hide;
- (void)relaunch;
- (void)launchAndWait:(BOOL)arg1 forTimeout:(int)arg2;
- (void)launch:(BOOL)arg1;
- (void)installPlugin;
- (BOOL)isHost;
- (BOOL)isInstalled;
- (id)sketchPluginsDirectory;
- (id)sketchApplicationSupportDirectory;
- (id)initWithBundleId:(id)arg1;

@end

