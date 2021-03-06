/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXTimer;

@interface AXPostConnectionTask : NSObject {
    BOOL _didTimeout;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _postConnectionBlock;

    AXTimer *_timeoutTimer;
}

@property BOOL didTimeout;
@property(copy) id postConnectionBlock;
@property(retain) AXTimer * timeoutTimer;

- (void)_performTask;
- (void)dealloc;
- (BOOL)didTimeout;
- (id)initWithConnectBlock:(id)arg1 timeout:(double)arg2 accessQueue:(id)arg3;
- (void)performTask;
- (id)postConnectionBlock;
- (void)setDidTimeout:(BOOL)arg1;
- (void)setPostConnectionBlock:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
