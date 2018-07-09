/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugAPIManager : NSObject <PROAPIAccessing> {
    NSMutableDictionary * _apis;
    struct PCRecursiveMutex { 
        int (**_vptr$PCMutex)(); 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } _Mutex; 
    }  _mutex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)apiForProtocol:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (void)unregisterAPIForProtocol:(id)arg1;

@end