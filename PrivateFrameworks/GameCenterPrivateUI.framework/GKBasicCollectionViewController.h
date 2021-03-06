/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCollectionViewDataSource, NSArray;

@interface GKBasicCollectionViewController : GKCollectionViewController {
    GKCollectionViewDataSource *_initialDataSource;
    NSArray *_metricsForSections;
    id _target;
}

@property(retain) GKCollectionViewDataSource * initialDataSource;
@property(retain) NSArray * metricsForSections;
@property(retain) id target;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 title:(id)arg2;
- (id)initialDataSource;
- (id)metricsForSections;
- (void)setDataSource:(id)arg1;
- (void)setInitialDataSource:(id)arg1;
- (void)setMetricsForSections:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
