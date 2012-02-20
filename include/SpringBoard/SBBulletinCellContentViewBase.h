/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class UIColor, UIImageView, UILabel;
@protocol SBBulletinDateLabel;

@interface SBBulletinCellContentViewBase : SBUnknownSuperclass {
	UILabel *_titleLabel;	// 48 = 0x30
	UILabel *_subtitleLabel;	// 52 = 0x34
	UILabel *_messageLabel;	// 56 = 0x38
	UILabel<SBBulletinDateLabel> *_dateLabel;	// 60 = 0x3c
	UIImageView *_attachmentImageView;	// 64 = 0x40
	UILabel *_attachmentLabel;	// 68 = 0x44
	unsigned _maxMessageLines;	// 72 = 0x48
	unsigned _maxTitleLines;	// 76 = 0x4c
	CGSize _imageSize;	// 80 = 0x50
	UIColor *_shadowColor;	// 88 = 0x58
	int _layoutStyle;	// 92 = 0x5c
	float _titleLineHeight;	// 96 = 0x60
	float _subtitleLineHeight;	// 100 = 0x64
	float _messageLineHeight;	// 104 = 0x68
	float _attachmentLineHeight;	// 108 = 0x6c
	BOOL _highlighted;	// 112 = 0x70
	int _dateFormatStyle;	// 116 = 0x74
}
@property(retain, nonatomic) UILabel *titleLabel;	// G=0x197a51; S=0x197b09; @synthesize=_titleLabel
@property(retain, nonatomic) UILabel *subtitleLabel;	// G=0x197a41; S=0x197b31; @synthesize=_subtitleLabel
@property(retain, nonatomic) UILabel *messageLabel;	// G=0x197a31; S=0x197b59; @synthesize=_messageLabel
@property(retain, nonatomic) UILabel *attachmentLabel;	// G=0x197a21; S=0x197b81; @synthesize=_attachmentLabel
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *dateLabel;	// G=0x197a11; S=0x197ba9; @synthesize=_dateLabel
@property(retain, nonatomic) UIImageView *attachmentImageView;	// G=0x197a01; S=0x197bd1; @synthesize=_attachmentImageView
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x1979f1; S=0x198661; @synthesize=_highlighted
@property(assign, nonatomic) int layoutStyle;	// G=0x1979d1; S=0x1979e1; @synthesize=_layoutStyle
@property(assign, nonatomic) int dateFormatStyle;	// G=0x1979b1; S=0x1979c1; @synthesize=_dateFormatStyle
- (id)_initForLayoutStyle:(int)layoutStyle;	// 0x197a81
- (id)initForBulletinStyle;	// 0x198905
- (id)initForSystemAlertStyle;	// 0x1988f1
- (void)dealloc;	// 0x1987e5
- (void)setTitleMaxLines:(unsigned)lines;	// 0x1987a5
- (void)setMessageMaxLines:(unsigned)lines;	// 0x198765
- (void)setShadowColor:(id)color;	// 0x19870d
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x198661
- (id)_modifiedLabel:(id)label withText:(id)text font:(id)font alignment:(int)alignment;	// 0x198571
- (id)_modifiedLabel:(id)label withText:(id)text font:(id)font;	// 0x19854d
- (void)setTitle:(id)title;	// 0x1984e1
- (void)setSubtitle:(id)subtitle;	// 0x19845d
- (void)setMessage:(id)message;	// 0x1983f1
- (void)setAttachmentText:(id)text;	// 0x198369
- (void)dateLabelDidChange:(id)dateLabel;	// 0x19833d
- (void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;	// 0x198109
- (void)setAttachmentImage:(id)image;	// 0x197fb5
- (void)setAttachmentImageSize:(CGSize)size;	// 0x197e79
- (void)_updateLabelFontsAndLineHeights;	// 0x197d15
- (float)_heightForLabel:(id)label forWidth:(float)width minLines:(unsigned)lines maxLines:(unsigned)lines4 lineHeight:(float)height;	// 0x197c71
- (float)_heightForLabel:(id)label forWidth:(float)width maxHeight:(float)height;	// 0x197bf9
- (void)_configureLabel:(id)label withFont:(id)font alignment:(int)alignment;	// 0x197999
- (id)_dateFont;	// 0x19799d
- (id)_titleFont;	// 0x1979a1
- (id)_subtitleFont;	// 0x1979a5
- (id)_messageFont;	// 0x1979a9
- (id)_attachmentFont;	// 0x1979ad
// declared property getter: - (int)dateFormatStyle;	// 0x1979b1
// declared property setter: - (void)setDateFormatStyle:(int)style;	// 0x1979c1
// declared property getter: - (int)layoutStyle;	// 0x1979d1
// declared property setter: - (void)setLayoutStyle:(int)style;	// 0x1979e1
// declared property getter: - (BOOL)isHighlighted;	// 0x1979f1
// declared property getter: - (id)attachmentImageView;	// 0x197a01
// declared property setter: - (void)setAttachmentImageView:(id)view;	// 0x197bd1
// declared property getter: - (id)dateLabel;	// 0x197a11
// declared property setter: - (void)setDateLabel:(id)label;	// 0x197ba9
// declared property getter: - (id)attachmentLabel;	// 0x197a21
// declared property setter: - (void)setAttachmentLabel:(id)label;	// 0x197b81
// declared property getter: - (id)messageLabel;	// 0x197a31
// declared property setter: - (void)setMessageLabel:(id)label;	// 0x197b59
// declared property getter: - (id)subtitleLabel;	// 0x197a41
// declared property setter: - (void)setSubtitleLabel:(id)label;	// 0x197b31
// declared property getter: - (id)titleLabel;	// 0x197a51
// declared property setter: - (void)setTitleLabel:(id)label;	// 0x197b09
@end