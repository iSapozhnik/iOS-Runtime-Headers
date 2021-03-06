/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, PLManagedAlbum, PLManagedAsset;

@interface PLAssetToAlbumOrder : PLManagedObject <PLOrderKeyObject> {
}

@property(retain) PLManagedAlbum * album;
@property(retain) PLManagedAsset * asset;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property long long orderValue;
@property(readonly) Class superclass;

+ (id)newAssetOrderForAsset:(id)arg1 album:(id)arg2;

- (id)childManagedObject;
- (void)didSave;
- (id)secondaryOrderSortKey;

@end
