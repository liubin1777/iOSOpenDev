/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert {
	unsigned _receivedString : 1;	// 60 = 0x3c
	unsigned _dismissOnActivate : 1;	// 60 = 0x3c
	NSTimer *_delayedDismissTimer;	// 64 = 0x40
}
+ (void)registerForSettingsAlerts;	// 0x8b171
+ (void)registerForAlerts;	// 0x8afed
+ (void)test;	// 0x8af7d
+ (id)errorStringForCode:(id)code;	// 0x8add5
+ (void)_daemonRestart:(id)restart;	// 0x8ae4d
+ (void)_newSIM:(id)sim;	// 0x8af79
- (void)dealloc;	// 0x8af01
- (id)alertDisplayViewWithSize:(CGSize)size;	// 0x8aab5
- (void)USSDStringAvailable:(id)available allowsResponse:(BOOL)response;	// 0x8ab01
- (BOOL)allowsResponse;	// 0x8abb9
- (BOOL)receivedString;	// 0x8aa81
- (void)setDismissOnActivate:(BOOL)activate;	// 0x8aa95
- (void)_delayedDismiss;	// 0x8abe9
- (void)activate;	// 0x8b269
- (void)deactivate;	// 0x8b20d
@end
