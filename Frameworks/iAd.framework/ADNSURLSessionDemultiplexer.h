/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate> {
    NSURLSessionConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _demuxQueue;
    NSString * _identifier;
    long long  _maximumRequestCount;
    long long  _requestCount;
    NSURLSession * _session;
    id /* block */  _sessionInvalidated;
    bool  _sessionMarkedInvalid;
    NSMutableDictionary * _taskInfoByTaskIdentifier;
}

@property (retain) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> *demuxQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSString *identifier;
@property (nonatomic) long long maximumRequestCount;
@property (nonatomic) long long requestCount;
@property (retain) NSURLSession *session;
@property (nonatomic, copy) id /* block */ sessionInvalidated;
@property (nonatomic) bool sessionMarkedInvalid;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *taskInfoByTaskIdentifier;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)configuration;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)dealloc;
- (id)demuxQueue;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 forIdentifier:(id)arg2 withMaximumRequestCount:(long long)arg3;
- (void)invalidateSessionWithCompletionHandler:(id /* block */)arg1;
- (long long)maximumRequestCount;
- (void)removeTask:(id)arg1;
- (long long)requestCount;
- (id)session;
- (id /* block */)sessionInvalidated;
- (bool)sessionMarkedInvalid;
- (void)setConfiguration:(id)arg1;
- (void)setDemuxQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumRequestCount:(long long)arg1;
- (void)setRequestCount:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionInvalidated:(id /* block */)arg1;
- (void)setSessionMarkedInvalid:(bool)arg1;
- (void)setTaskInfoByTaskIdentifier:(id)arg1;
- (id)taskInfoByTaskIdentifier;
- (id)taskInfoForTask:(id)arg1;

@end