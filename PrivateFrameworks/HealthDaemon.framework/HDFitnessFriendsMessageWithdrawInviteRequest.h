/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsMessageWithdrawInviteRequest : PBRequest <NSCopying> {
    NSString * _handshakeToken;
}

@property (nonatomic, retain) NSString *handshakeToken;
@property (nonatomic, readonly) BOOL hasHandshakeToken;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handshakeToken;
- (BOOL)hasHandshakeToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHandshakeToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
