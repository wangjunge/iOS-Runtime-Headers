/* Generated by RuntimeBrowser.
 */

@protocol ABStyleProvider <NSObject, NSSecureCoding>

@required

- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(BOOL)arg1;
- (int)abCellStyleForGroupsTableGrouped;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForMembersTable;
- (UIButton *)accessoryButtonForRelatedNames;
- (UIView *)accessoryViewForFavoritesBadge;
- (UIView *)accessoryViewForMailVIPBadge;
- (UIView *)accessoryViewForVideoBadge;
- (UIImage *)cardActionButtonBackgroundHighlighted;
- (UIImage *)cardActionButtonBackgroundNormal;
- (float)cardActionButtonHeight;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardActionButtonImageInsets;
- (float)cardActionButtonSpacing;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardActionButtonTitleDoubleLineInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardActionButtonTitleSingleLineInsets;
- (int)cardActionButtonType;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardActionButtonsInsets;
- (UIImage *)cardActionConferenceIcon;
- (UIImage *)cardActionConferenceIconPressed;
- (BOOL)cardActionsAllowFaceTimeFavorites;
- (BOOL)cardActionsAllowVoiceFavorites;
- (BOOL)cardAlwaysShowsNotes;
- (int)cardCellAccessoryType;
- (int)cardCellAccessoryTypeEdit;
- (int)cardCellAccessoryTypeEditRingtone;
- (int)cardCellAccessoryTypeRingtone;
- (UIColor *)cardCellBackgroundColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardCellBackgroundInsetsWhenEditing:(BOOL)arg1;
- (float)cardCellBadgePaddingLeft;
- (UIColor *)cardCellDisabledBackgroundColor;
- (UIColor *)cardCellDividerColorVertical:(BOOL)arg1;
- (UIColor *)cardCellDividerShadowColorVertical:(BOOL)arg1;
- (UIImage *)cardCellFacebookBadge;
- (int)cardCellSelectionStyle;
- (float)cardCellVerticalSpacingBetweenAlertsOfSimilarType;
- (UIColor *)cardClippingImageLabelBevelColor;
- (UIColor *)cardClippingImageLabelColor;
- (float)cardContentOccluderDefaultBottomFadingHeight;
- (float)cardContentOccluderDefaultTopFadingHeight;
- (float)cardDeleteButtonHeight;
- (UIImage *)cardDeleteButtonImage;
- (UIImage *)cardDeleteButtonImagePressed;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardDeleteButtonInsets;
- (UIColor *)cardHeaderBackgroundColor;
- (UIColor *)cardHeaderDefaultLabelTextColor;
- (float)cardHeaderDisplayImageLeftMargin;
- (float)cardHeaderDisplayImageTopMargin;
- (float)cardHeaderEditingImageLeftMargin;
- (float)cardHeaderEditingImageTopMargin;
- (float)cardHeaderImageNameEditorSpacing;
- (float)cardHeaderImageNameSpacing;
- (BOOL)cardHeaderNameViewAlignOnBottom;
- (float)cardHeaderSpacingFromCardBodyWhenEditing:(BOOL)arg1;
- (float)cardHeaderViewLeftMargin;
- (float)cardHeaderViewTopMargin;
- (UIColor *)cardHeadlineShadowColor;
- (UIColor *)cardHeadlineTextColor;
- (UIFont *)cardHeadlineTextFont;
- (UIColor *)cardLabelBackgroundColor;
- (UIColor *)cardLabelDisabledTextColor;
- (UIColor *)cardLabelEditingTextColor;
- (UIFont *)cardLabelEditingTextFont;
- (UIColor *)cardLabelEmphasizedHighlightedTextColor;
- (UIColor *)cardLabelHighlightedShadowColor;
- (UIColor *)cardLabelHighlightedTextColor;
- (UIColor *)cardLabelImportantHighlightedTextColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardLabelInsets;
- (UIColor *)cardLabelSelectedBackgroundColor;
- (UIColor *)cardLabelShadowColor;
- (struct CGSize { float x1; float x2; })cardLabelShadowOffset;
- (UIColor *)cardLabelTextColor;
- (UIFont *)cardLabelTextFont;
- (float)cardLabelWidth;
- (float)cardLinkingHeaderLabelHeight;
- (float)cardMaxHeightForSwellTextViewWhenEditing:(BOOL)arg1;
- (unsigned int)cardNameNumberOfLines;
- (UIView *)cardNotesHeaderView;
- (float)cardNotesHeaderViewHeight;
- (BOOL)cardNotesLabelIncludesSource;
- (float)cardNotesMinimumHeightWhenEditing:(BOOL)arg1;
- (UIImage *)cardPhotoBackgroundImage;
- (UIImage *)cardPhotoEditMultipleOverlayImage;
- (UIImage *)cardPhotoEditMultiplePhotoBackdropImage;
- (UIImage *)cardPhotoEditOverlayImage;
- (UIImage *)cardPhotoEditPlaceholderImage;
- (UIImage *)cardPhotoFacebookAttributionImage;
- (float)cardPhotoFrameBorderSize;
- (UIImage *)cardPhotoMaskImage;
- (UIImage *)cardPhotoMaskMultipleImage;
- (struct CGSize { float x1; float x2; })cardPhotoOffset;
- (UIImage *)cardPhotoOverlayImage;
- (UIImage *)cardPhotoPasteboardMaskImage;
- (UIImage *)cardPhotoShadowImage;
- (struct CGSize { float x1; float x2; })cardPhotoShadowOffset;
- (BOOL)cardPhotoShouldApplyOverlayImageWhenLabelPresent;
- (BOOL)cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;
- (UIImage *)cardPlaceholderCompanyImage;
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (UIImage *)cardPlaceholderPersonImage;
- (BOOL)cardSectionAlwaysWantsHeader;
- (UIColor *)cardSectionBackgroundColor;
- (BOOL)cardSectionDrawsDefaultTopShadow;
- (UIFont *)cardSectionHeaderFont;
- (float)cardSectionHeaderHeightForBottomActions;
- (float)cardSectionHeaderHeightForFirstCardActions;
- (float)cardSectionHeaderHeightForFollowingCardActions;
- (float)cardSectionHeaderHorizontalPadding;
- (UIColor *)cardSectionHeaderShadowColor;
- (struct CGSize { float x1; float x2; })cardSectionHeaderShadowOffset;
- (UIColor *)cardSectionHeaderTextColor;
- (BOOL)cardShouldUseSeparateSectionsForUnknownCardActions;
- (UIColor *)cardTableBackgroundColor;
- (UIColor *)cardTableCellBorderColor;
- (BOOL)cardTableShouldAdjustForKeyboard;
- (BOOL)cardTableShouldRemoveBackgroundView;
- (BOOL)cardTableUsesRowFadeAnimation;
- (UITableViewCell *)cardTableView:(UITableView *)arg1 prepareCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (BOOL)cardTableView:(UITableView *)arg1 wantsHeaderForProperty:(int)arg2 inSection:(int)arg3 whenEditing:(BOOL)arg4;
- (float)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(BOOL)arg1;
- (float)cardTableViewLinkingHeaderTopPaddingWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (unsigned int)cardTagNumberOfLines;
- (UIColor *)cardTaglineShadowColor;
- (UIColor *)cardTaglineTextColor;
- (UIFont *)cardTaglineTextFont;
- (UIColor *)cardValueBackgroundColor;
- (UIImage *)cardValueClearButtonImage;
- (UIColor *)cardValueDisabledTextColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardValueEditingInsets;
- (UIColor *)cardValueHighlightedShadowColor;
- (UIColor *)cardValueHighlightedTextColor;
- (BOOL)cardValueHighlightsWhenTouched;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardValueInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })cardValueInsetsWhenEditing:(BOOL)arg1;
- (UIColor *)cardValueShadowColor;
- (struct CGSize { float x1; float x2; })cardValueShadowOffset;
- (UIColor *)cardValueTappableColor;
- (UIColor *)cardValueTextColor;
- (UIFont *)cardValueTextFont;
- (int)composeModalPresentationStyle;
- (NSString *)copyLocalizedLabel:(NSString *)arg1;
- (NSString *)copyLocalizedPropertyName:(int)arg1 lowercase:(BOOL)arg2;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (void)customSetEmphasized:(BOOL)arg1 onCell:(UITableViewCell *)arg2;
- (BOOL)datePickerHasNavigationTitle;
- (int)dialogStyleForDeleteConfirmation;
- (UIColor *)editorViewColor;
- (UIFont *)editorViewLargeFont;
- (UIFont *)editorViewSmallFont;
- (UIColor *)groupAccountNameColor;
- (UIFont *)groupAccountNameFont;
- (UIColor *)groupAccountNameShadowColor;
- (struct CGSize { float x1; float x2; })groupAccountNameShadowOffset;
- (UIColor *)groupCellBackgroundColor;
- (UIColor *)groupCellHighlightedTextColor;
- (int)groupCellSelectionStyle;
- (UIColor *)groupCellShadowColor;
- (struct CGSize { float x1; float x2; })groupCellShadowOffset;
- (UIColor *)groupCellTextColor;
- (UIColor *)groupHeaderBackgroudColor;
- (BOOL)groupSectionDrawsDefaultTopShadow;
- (float)groupSectionHeaderHeight;
- (float)groupSectionHeaderHorizontalPadding;
- (UIColor *)groupsTableBackgroundColor;
- (BOOL)groupsTableShouldRemoveBackgroundView;
- (BOOL)labelPickerShouldPushCustomLabelCreator;
- (BOOL)labelPickerUsesOpaqueBackground;
- (_UIGraphicsLetterpressStyle *)letterpressStyle;
- (BOOL)linkedCardsShouldAllowDeletion;
- (BOOL)linkedPhotoLabelStringsDescribeSourceOnly;
- (BOOL)linkedPhotoPickerIncludesCurrentPhoto;
- (UIView *)memberHeaderBackgroundView;
- (UIFont *)memberNameBoldFont;
- (UIFont *)memberNameBoldFontForSectionHeader;
- (UIColor *)memberNameDisabledTextColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })memberNameInsets;
- (float)memberNameInterComponentSpacing;
- (UIImage *)memberNameMeCardDisabledImage;
- (UIImage *)memberNameMeCardImage;
- (UIImage *)memberNameMeCardSelectedImage;
- (UIColor *)memberNameMeCardShadowColor;
- (UIColor *)memberNameMeCardTextColor;
- (UIFont *)memberNamePlaceholderFont;
- (UIFont *)memberNameRegularFont;
- (UIFont *)memberNameRegularFontForSectionHeader;
- (UIColor *)memberNameSelectedColor;
- (UIColor *)memberNameSelectedShadowColor;
- (UIColor *)memberNameShadowColor;
- (struct CGSize { float x1; float x2; })memberNameShadowOffset;
- (UIColor *)memberNameTextColor;
- (UIImage *)memberPhotoMaskImage;
- (UIImage *)memberPhotoOverlayImage;
- (UIImage *)memberPlaceholderCompanyImage;
- (UIImage *)memberPlaceholderPersonImage;
- (float)memberScrollBarInset;
- (UIColor *)memberSearchFieldBackgroundColor;
- (UIImage *)memberSectionListHeaderImage;
- (UIColor *)memberSelectedBackgroundColor;
- (BOOL)memberShowContactPhoto;
- (UIColor *)membersBackgroundColor;
- (unsigned int)membersCountToShowIndex;
- (unsigned int)membersCountToShowSections;
- (UIColor *)membersHeaderBackgroundColor;
- (UIColor *)membersHeaderContentViewBackgroundColor;
- (float)membersIndexMaximumHeight;
- (UIColor *)membersIndexTextColor;
- (UIColor *)membersIndexTrackingBackgroundColor;
- (UIColor *)membersSearchBackgroundColor;
- (BOOL)membersSearchBarIsInTableHeader;
- (UIColor *)membersSearchCellBackgroundColor;
- (int)membersSelectionStyle;
- (UIView *)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (UIView *)newBackgroundViewForCellStyle:(int)arg1 selected:(BOOL)arg2;
- (UIButton *)newCardActionButton;
- (UIView *)newCardDividerViewVertical:(BOOL)arg1;
- (UIView *)newCustomCardTableScrollingBackgroundView;
- (UIView *)newTableFooterViewForCellStyle:(int)arg1;
- (int)peoplePickerBarStyle;
- (BOOL)peoplePickerBarStyleIsTranslucent;
- (UIColor *)personActionColor;
- (UIFont *)personActionFont;
- (UIColor *)personActionHighlightedColor;
- (UIColor *)personActionShadowColor;
- (struct CGSize { float x1; float x2; })personActionShadowOffset;
- (float)personEditorFieldVerticalInset;
- (UIColor *)personHeaderPasteboardColor;
- (UIColor *)personHeaderShadowColor;
- (struct CGSize { float x1; float x2; })personHeaderShadowOffset;
- (UIColor *)personLabelColor;
- (UIFont *)personLabelFont;
- (float)personLabelFontMinSize;
- (UIColor *)personLabelHighlightedColor;
- (UIColor *)personLabelShadowColor;
- (struct CGSize { float x1; float x2; })personLabelShadowOffset;
- (UIFont *)personNoValueLabelFont;
- (UIColor *)personNoValueLabelShadowColor;
- (struct CGSize { float x1; float x2; })personNoValueLabelShadowOffset;
- (UIColor *)personNoValueLabelTextColor;
- (BOOL)personTableHeaderViewScrollsWhenEditing:(BOOL)arg1;
- (UIColor *)personValueColor;
- (UIColor *)personValueEmphasizedColor;
- (UIColor *)personValueEmphasizedHighlightColor;
- (UIFont *)personValueFont;
- (float)personValueFontMinSize;
- (UIColor *)personValueHighlightColor;
- (UIColor *)personValueImportantColor;
- (UIColor *)personValueImportantHighlightColor;
- (UIImage *)personViewGetFavoritesBadge;
- (UIImage *)personViewGetFavoritesBadgeHighlighted;
- (UIImage *)personViewGetNameViewAccessoryImage;
- (UIImage *)personViewGetNameViewAccessoryImageSelected;
- (float)personViewHeaderImageHeight;
- (float)personViewHeaderImageWidth;
- (float)personViewHeaderMinimumHeight;
- (float)personViewHeaderNameViewTextHorizontalInset;
- (float)personViewHeaderNameViewTextVerticalInset;
- (float)personViewHeaderRightMargin;
- (float)personViewHorizontalCellInset;
- (float)personViewRowHeightWhenEditing:(BOOL)arg1;
- (float)personViewVerticalSpacing;
- (int)pickerTransitionStyle;
- (BOOL)presentDatePickerInPopover;
- (BOOL)presentModalViewInPopover;
- (BOOL)presentNewContactsControllersInPopover;
- (BOOL)refreshTinyActionCell;
- (BOOL)reloadCallAction;
- (BOOL)searchControllerForceKeyboardDisplayEnabled;
- (BOOL)searchIsAlwaysActive;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occupiedCorners:(unsigned int)arg2 forCell:(UITableViewCell *)arg3;
- (void)selectLabelPartForCell:(UITableViewCell *)arg1;
- (void)selectValuePartForCell:(UITableViewCell *)arg1;
- (void)selectWholePartForCell:(UITableViewCell *)arg1;
- (UIColor *)separatorBottomShadowColorForCellStyle:(int)arg1;
- (UIColor *)separatorColorForCellStyle:(int)arg1;
- (int)separatorStyleForCellStyle:(int)arg1;
- (UIColor *)separatorTopShadowColorForCellStyle:(int)arg1;
- (BOOL)serverSearchNavigationBarHidingEnabled;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(UIButton *)arg2;
- (UIColor *)shadowColorForCellStyle:(int)arg1;
- (BOOL)shouldApplyMaskImage;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldDefinePickerTransitionStyle;
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;
- (BOOL)shouldPropagateStylesToPickers;
- (BOOL)shouldShowCardPhotoPlaceholder;
- (BOOL)shouldUseCardContentProviderWhenAvailable;
- (BOOL)shouldUsePeoplePickerBarStyle;
- (int)unknownModalPresentationStyle;
- (void)unselectAllCellParts:(UITableViewCell *)arg1;

@end