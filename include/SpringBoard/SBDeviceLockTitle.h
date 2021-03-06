/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSString;

@interface SBDeviceLockTitle : SBUnknownSuperclass {
	int _style;	// 48 = 0x30
	int _interfaceOrientation;	// 52 = 0x34
}
@property(assign, nonatomic) int interfaceOrientation;	// G=0xf0b11; S=0xf0b21; @synthesize=_interfaceOrientation
@property(retain, nonatomic) NSString *subtitle;	// G=0xf0b05; S=0xf0b09; 
@property(retain, nonatomic) NSString *title;	// G=0xf0afd; S=0xf0b01; 
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0xf0af5; S=0xf0af9; 
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0xf0b9d
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0xf0b31
// declared property getter: - (BOOL)isHighlighted;	// 0xf0af5
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0xf0af9
// declared property getter: - (id)title;	// 0xf0afd
// declared property setter: - (void)setTitle:(id)title;	// 0xf0b01
// declared property getter: - (id)subtitle;	// 0xf0b05
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0xf0b09
- (void)blinkSubtitle;	// 0xf0b0d
// declared property getter: - (int)interfaceOrientation;	// 0xf0b11
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0xf0b21
@end
