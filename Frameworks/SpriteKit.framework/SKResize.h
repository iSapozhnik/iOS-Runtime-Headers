/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKResize : SKAction {

  /* Error parsing encoded ivar type info: ^{SKCResize=^^?If@?@BddffdBB@?ifffff{?=ff}{?=ff}{?=ff}cccc} */
    struct SKCResize { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; bool x7; double x8; double x9; float x10; float x11; double x12; bool x13; bool x14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; float x22; struct { float x_23_1_1; float x_23_1_2; } x23; struct { float x_24_1_1; float x_24_1_2; } x24; struct { float x_25_1_1; float x_25_1_2; } x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; } *_mycaction;

}

+ (id)resizeByWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
