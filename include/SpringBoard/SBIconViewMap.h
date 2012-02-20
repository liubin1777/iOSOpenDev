/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SBIconObserver.h"
#import "SBIconViewLocker.h"

@class NSMapTable;
@protocol SBIconViewDelegate;

@interface SBIconViewMap : SBUnknownSuperclass <SBIconViewLocker, SBIconObserver> {
	NSMapTable *_iconViewsForIcons;	// 4 = 0x4
	id<SBIconViewDelegate> _iconViewdelegate;	// 8 = 0x8
	NSMapTable *_recycledIconViewsByType;	// 12 = 0xc
	NSMapTable *_labels;	// 16 = 0x10
	NSMapTable *_badges;	// 20 = 0x14
}
+ (id)homescreenMap;	// 0x13d6e5
+ (Class)iconViewClassForIcon:(id)icon location:(int)location;	// 0x13d5b9
- (id)init;	// 0x13d3e1
- (void)dealloc;	// 0x13e5c5
- (id)mappedIconViewForIcon:(id)icon;	// 0x13e5a1
- (id)_iconViewForIcon:(id)icon;	// 0x13e3c1
- (id)iconViewForIcon:(id)icon;	// 0x13e341
- (void)_addIconView:(id)view forIcon:(id)icon;	// 0x13e23d
- (void)purgeIconFromMap:(id)map;	// 0x13e179
- (void)_recycleIconView:(id)view;	// 0x13e08d
- (void)recycleViewForIcon:(id)icon;	// 0x13e039
- (void)recycleAndPurgeAll;	// 0x13dd79
- (id)releaseIconLabelForIcon:(id)icon;	// 0x13dd0d
- (void)captureIconLabel:(id)label forIcon:(id)icon;	// 0x13dce1
- (void)purgeRecycledIconViewsForClass:(Class)aClass;	// 0x13dca1
- (void)_modelListAddedIcon:(id)icon;	// 0x13dbcd
- (void)_modelRemovedIcon:(id)icon;	// 0x13db69
- (void)_modelReloadedIcons;	// 0x13db59
- (void)_modelReloadedState;	// 0x13d845
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;	// 0x13d72d
@end