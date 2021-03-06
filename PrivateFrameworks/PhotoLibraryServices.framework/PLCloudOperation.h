/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLCloudOperationResource, PLCloudPhotoLibraryManager, PLCloudScenario;

@interface PLCloudOperation : NSObject {
    PLCloudPhotoLibraryManager *_connection;
    unsigned int _cost;
    long _createdAt;
    PLCloudOperationResource *_operationResource;
    BOOL _running;
    PLCloudScenario *_scenario;
}

@property(readonly) PLCloudPhotoLibraryManager * connection;
@property(readonly) unsigned int cost;
@property(readonly) long createdAt;
@property(retain) PLCloudOperationResource * operationResource;
@property BOOL running;
@property(readonly) PLCloudScenario * scenario;

- (id)connection;
- (unsigned int)cost;
- (long)createdAt;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithScenario:(id)arg1 cloudConnection:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)operationResource;
- (void)requestCancel;
- (id)resource;
- (void)runOperationWithCompletionHandler:(id)arg1;
- (BOOL)running;
- (id)scenario;
- (void)setOperationResource:(id)arg1;
- (void)setRunning:(BOOL)arg1;

@end
