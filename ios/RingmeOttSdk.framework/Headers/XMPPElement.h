#import <Foundation/Foundation.h>
#import "XMPPJID.h"
#import "DDXML.h"

/**
 * The XMPPElement provides the base class for XMPPIQ, XMPPMessage & XMPPPresence.
 * 
 * This class extends DDXMLElement.
 * The NSXML classes (DDXMLElement & DDXMLNode) provide a full-featured library for working with XML elements.
 * 
 * On the iPhone, the KissXML library provides a drop-in replacement for Apple's NSXML classes.
**/

@interface XMPPElement : DDXMLElement <NSSecureCoding, NSCopying>

#pragma mark Common Jabber Methods

- (NSString *)elementID;

- (XMPPJID *)to;
- (XMPPJID *)from;

- (NSString *)toStr;
- (NSString *)fromStr;

#pragma mark To and From Methods

- (BOOL)isTo:(XMPPJID *)to;
- (BOOL)isTo:(XMPPJID *)to options:(XMPPJIDCompareOptions)mask;

- (BOOL)isFrom:(XMPPJID *)from;
- (BOOL)isFrom:(XMPPJID *)from options:(XMPPJIDCompareOptions)mask;

- (BOOL)isToOrFrom:(XMPPJID *)toOrFrom;
- (BOOL)isToOrFrom:(XMPPJID *)toOrFrom options:(XMPPJIDCompareOptions)mask;

- (BOOL)isTo:(XMPPJID *)to from:(XMPPJID *)from;
- (BOOL)isTo:(XMPPJID *)to from:(XMPPJID *)from options:(XMPPJIDCompareOptions)mask;

@end
