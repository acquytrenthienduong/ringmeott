#import <Foundation/Foundation.h>
#import "DDXML.h"

@class XMPPIQ;
@class XMPPMessage;
@class XMPPPresence;

@interface DDXMLElement (XEP_0297)

#pragma mark Forwarded Stanza 

- (DDXMLElement *)forwardedStanza;

- (BOOL)hasForwardedStanza;

- (BOOL)isForwardedStanza;

#pragma mark Delayed Delivery Date

- (NSDate *)forwardedStanzaDelayedDeliveryDate;

#pragma mark XMPPElement

- (XMPPIQ *)forwardedIQ;

- (BOOL)hasForwardedIQ;

- (XMPPMessage *)forwardedMessage;

- (BOOL)hasForwardedMessage;

- (XMPPPresence *)forwardedPresence;

- (BOOL)hasForwardedPresence;

@end
