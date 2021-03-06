/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class <SPDeviceConnectionDelegate>, NSHashTable, NSString, NSXPCConnection;

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol> {
    BOOL _connectionIsValid;
    <SPDeviceConnectionDelegate> *_delegate;
    NSHashTable *_observers;
    NSXPCConnection *_serverConnection;
}

@property BOOL connectionIsValid;
@property(copy,readonly) NSString * debugDescription;
@property <SPDeviceConnectionDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSHashTable * observers;
@property(retain) NSXPCConnection * serverConnection;
@property(readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)_enumerateObserversSafely:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPendingInstallations;
- (BOOL)connectionIsValid;
- (void)createXPCConnection;
- (id)delegate;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id)arg2;
- (void)fetchInstalledApplicationsWithCompletion:(id)arg1;
- (void)fetchInstalledGlancesWithCompletion:(id)arg1;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(id)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id)arg2;
- (void)getAlwaysInstallWithCompletion:(id)arg1;
- (void)hideUserNotification;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completion:(id)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(id)arg2;
- (id)localeForUserNotification;
- (id)observers;
- (void)receiveData:(id)arg1;
- (void)removeApplication:(id)arg1 completion:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)serverConnection;
- (void)setAlwaysInstall:(id)arg1;
- (void)setConnectionIsValid:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)showUserNotification:(int)arg1 bundleID:(id)arg2;
- (void)wakeExtensionForWatchApp:(id)arg1;

@end
