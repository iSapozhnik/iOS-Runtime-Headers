/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (BOOL)autoBrightnessEnabled;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(id)arg1 changedAction:(id)arg2;
+ (float)currentValue;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)endObservingExternalBrightnessChanges;
+ (id)iconImage;
+ (void)incrementBrightnessValue:(float)arg1;
+ (float)incrementedBrightnessValue:(float)arg1;
+ (id)preferencesURL;
+ (void)setAutoBrightnessEnabled:(BOOL)arg1;
+ (void)setValue:(float)arg1;

@end