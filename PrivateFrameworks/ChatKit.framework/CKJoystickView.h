/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKJoystickButtonItem, CKJoystickController, NSArray, NSMutableArray, UIView;

@interface CKJoystickView : UIView {
    NSMutableArray *_allButtonItems;
    BOOL _autoDismiss;
    CKJoystickButtonItem *_centerButtonItem;
    BOOL _collapsed;
    CKJoystickController *_controller;
    BOOL _delegateCollapsedWillChange;
    UIView *_discView;
    BOOL _dragging;
    double _endAngle;
    BOOL _expanded;
    unsigned int _highlightStyle;
    CKJoystickButtonItem *_highlightedButtonItem;
    double _incrementAngle;
    NSArray *_radialButtonItems;
    double _startAngle;
    unsigned int _style;
    BOOL _touchInside;
}

@property(retain) NSMutableArray * allButtonItems;
@property BOOL autoDismiss;
@property(retain) CKJoystickButtonItem * centerButtonItem;
@property(getter=isCollapsed) BOOL collapsed;
@property CKJoystickController * controller;
@property BOOL delegateCollapsedWillChange;
@property(retain) UIView * discView;
@property(getter=isDragging) BOOL dragging;
@property double endAngle;
@property(getter=isExpanded) BOOL expanded;
@property unsigned int highlightStyle;
@property CKJoystickButtonItem * highlightedButtonItem;
@property double incrementAngle;
@property(copy) NSArray * radialButtonItems;
@property double startAngle;
@property unsigned int style;
@property(getter=isTouchInside) BOOL touchInside;

+ (void)buttonChangeAnimation:(id)arg1 completion:(id)arg2;
+ (void)buttonRotateAnimation:(id)arg1 completion:(id)arg2;
+ (void)collapseAnimation:(id)arg1 completion:(id)arg2;
+ (void)expandAnimation:(id)arg1 completion:(id)arg2;
+ (void)highlightAnimation:(id)arg1 completion:(id)arg2;

- (id)allButtonItems;
- (BOOL)autoDismiss;
- (id)buttonItemAtPoint:(struct CGPoint { float x1; float x2; })arg1 velocity:(struct CGPoint { float x1; float x2; })arg2;
- (id)centerButtonItem;
- (id)controller;
- (void)dealloc;
- (BOOL)delegateCollapsedWillChange;
- (id)discView;
- (double)endAngle;
- (void)highlightButtonItem:(id)arg1 animated:(BOOL)arg2;
- (unsigned int)highlightStyle;
- (id)highlightedButtonItem;
- (double)incrementAngle;
- (id)initWithCenterButtonItem:(id)arg1 radialButtonItems:(id)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 style:(unsigned int)arg6 highlightStyle:(unsigned int)arg7;
- (BOOL)isCollapsed;
- (BOOL)isDragging;
- (BOOL)isExpanded;
- (BOOL)isTouchInside;
- (void)joystickGestureRecognized:(id)arg1;
- (void)layoutSubviews;
- (void)orientationDidChange;
- (id)radialButtonItems;
- (void)setAllButtonItems:(id)arg1;
- (void)setAutoDismiss:(BOOL)arg1;
- (void)setCenterButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCenterButtonItem:(id)arg1;
- (void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setCollapsed:(BOOL)arg1;
- (void)setController:(id)arg1;
- (void)setDelegateCollapsedWillChange:(BOOL)arg1;
- (void)setDiscView:(id)arg1;
- (void)setDragging:(BOOL)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setExpanded:(BOOL)arg1;
- (void)setHighlightStyle:(unsigned int)arg1;
- (void)setHighlightedButtonItem:(id)arg1;
- (void)setIncrementAngle:(double)arg1;
- (void)setRadialButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setRadialButtonItems:(id)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTouchInside:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)startAngle;
- (unsigned int)style;

@end