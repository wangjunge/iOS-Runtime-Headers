/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNOffscreenController : NSObject {
    CALayer * _baseLayer;
    KNAnimatedSlideView * mAnimator;
    BOOL  mFirstEvent;
    BOOL  mIsImageGenerationCancelled;
    struct CGSize { 
        float width; 
        float height; 
    }  mOutputSize;
    KNPlaybackSession * mSession;
    KNShow * mShow;
    unsigned int  mSlideIndex;
}

@property (nonatomic, readonly) KNAnimatedSlideView *animatedSlideView;
@property (nonatomic, readonly) CALayer *baseLayer;
@property (nonatomic, readonly) KNSlide *currentSlide;
@property (nonatomic, readonly) KNSlideNode *currentSlideNode;
@property (nonatomic, readonly) unsigned int eventCount;
@property (nonatomic, readonly) unsigned int eventIndex;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } outputSize;
@property (nonatomic, readonly) int playMode;
@property (nonatomic, readonly) KNPlaybackSession *playbackSession;
@property (nonatomic, readonly) KNShow *show;
@property (nonatomic, readonly) unsigned int slideCount;
@property (nonatomic, readonly) unsigned int slideIndex;

- (id)animatedSlideView;
- (id)baseLayer;
- (void)cancelImageGeneration;
- (struct CGImage { }*)copyImageOfCurrentEventIgnoringBuildVisilibity:(BOOL)arg1;
- (id)currentSlide;
- (id)currentSlideNode;
- (void)dealloc;
- (void)drawCurrentEventIntoContext:(struct CGContext { }*)arg1 intoRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 ignoreBuildVisibility:(BOOL)arg3;
- (unsigned int)eventCount;
- (unsigned int)eventIndex;
- (void)generateImageOfCurrentEventWithCompletonHandler:(id /* block */)arg1;
- (BOOL)gotoEventIndex:(unsigned int)arg1;
- (BOOL)gotoFirstSlide;
- (BOOL)gotoLastSlide;
- (BOOL)gotoNextEvent;
- (BOOL)gotoNextSlide;
- (BOOL)gotoPreviousSlide;
- (BOOL)gotoSlideNode:(id)arg1 andEvent:(unsigned int)arg2;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(struct CGSize { float x1; float x2; })arg3;
- (struct CGSize { float x1; float x2; })outputSize;
- (void)p_setAnimator:(id)arg1;
- (int)playMode;
- (id)playbackSession;
- (id)show;
- (unsigned int)slideCount;
- (unsigned int)slideIndex;
- (id)transitionRendererAtCurrentEvent;

@end
