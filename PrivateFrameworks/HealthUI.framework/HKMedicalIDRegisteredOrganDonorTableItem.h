/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem <HKIDIntroductionCellDelegate> {
    <HKMedicalIDRegisteredOrganDonorTableItemDelegate> * _delegate;
    HKIDIntroductionCell * _notRegisteredCell;
    int  _organization;
    HKIDRegisteredReviewCell * _registeredCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKMedicalIDRegisteredOrganDonorTableItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_displayCell;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (id)delegate;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)arg1 organDonationOrganization:(int)arg2;
- (void)introductionCellDidTapActionButton:(id)arg1;
- (void)introductionCellDidTapLinkButton:(id)arg1;
- (id)organizationLogo;
- (id)organizationLogoInline;
- (void)presentDonateLifeRegistrationSequence;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })separatorInset;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (id)title;
- (id)titleForFooter;

@end
