#import "XMPPMessage.h"
@class XMPPJID;

@interface XMPPMessage (XEP_0280)

- (DDXMLElement *)receivedMessageCarbon;
- (DDXMLElement *)sentMessageCarbon;

- (BOOL)isMessageCarbon;
- (BOOL)isReceivedMessageCarbon;
- (BOOL)isSentMessageCarbon;
- (BOOL)isTrustedMessageCarbon;
- (BOOL)isTrustedMessageCarbonForMyJID:(XMPPJID *)jid;

- (XMPPMessage *)messageCarbonForwardedMessage;

- (void)addPrivateMessageCarbons;

@end
