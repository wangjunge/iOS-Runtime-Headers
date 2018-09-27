/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigMetalContext : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLBuffer> * _fullRangeVertexBuf;
    MTLVertexDescriptor * _fullRangeVertexDesc;
    <MTLLibrary> * _library;
}

@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic, retain) <MTLBuffer> *fullRangeVertexBuf;
@property (nonatomic, retain) MTLVertexDescriptor *fullRangeVertexDesc;
@property (nonatomic, retain) <MTLLibrary> *library;

- (void).cxx_destruct;
- (id)CreateMetalTextureFromFile:(const char *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (id)CreateMetalTextureFromFile:(const char *)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2;
- (bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2;
- (bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize { double x1; double x2; })arg3 plane:(unsigned long long)arg4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4 plane:(unsigned long long)arg5;
- (id)commandBuffer;
- (id)commandQueue;
- (void)commit;
- (void)commitAndWait;
- (int)commonInitWithOptionalCommandQueue:(id)arg1;
- (id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5;
- (id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6;
- (id)device;
- (id)fullRangeVertexBuf;
- (id)fullRangeVertexDesc;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1;
- (id)init;
- (int)initRangeVertex;
- (id)initWithLibraryData:(char *)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3;
- (id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2;
- (void)insertDebugCaptureBoundary;
- (id)library;
- (void)prewarmInternalMetalShadersForFormatsList:(id)arg1;
- (id)rebindTex:(id)arg1 format:(unsigned long long)arg2 plane:(int)arg3 xFactor:(int)arg4;
- (id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5;
- (id)rebindTex:(id)arg1 roi:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)setCommandBuffer:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setFullRangeVertexBuf:(id)arg1;
- (void)setFullRangeVertexDesc:(id)arg1;
- (void)setLibrary:(id)arg1;
- (int)setQueuePriority:(int)arg1;
- (void)waitForIdle;
- (void)waitForSchedule;

@end