/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIBezierPath, UIColor, UIImage;



@interface SUGridTableViewCellBackgroundView : UIView 
{
    UIColor *_backgroundColor;
    NSInteger _borderedEdges;
    UIImage *_borderImage;
    UIBezierPath *_bottomCornersPath;
    UIBezierPath *_topCornersPath;
}

@property(retain) UIImage *borderImage;
@property NSInteger borderedEdges;


- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawInteriorBordersWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBorderedEdges:(NSInteger)arg1;
- (void)setBorderImage:(id)arg1;
- (void)_resetCachedPaths;
- (id)borderImage;
- (NSInteger)borderedEdges;
- (id)_topCornersPath;
- (id)_bottomCornersPath;

@end