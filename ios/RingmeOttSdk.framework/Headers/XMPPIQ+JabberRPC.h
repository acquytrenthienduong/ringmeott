//
//  XMPPIQ+JabberRPC.h
//  XEP-0009
//
//  Created by Eric Chamberlain on 5/16/10.
//

#import <Foundation/Foundation.h>

#import "XMPPIQ.h"


@interface XMPPIQ(JabberRPC)

/**
 * Creates and returns a new autoreleased XMPPIQ.
 * This is the only method you normally need to call.
 **/
+ (XMPPIQ *)rpcTo:(XMPPJID *)jid methodName:(NSString *)method parameters:(NSArray *)parameters;

#pragma mark -
#pragma mark Element helper methods

// returns a Jabber-RPC query elelement
//		<query xmlns='jabber:iq:rpc'>
+(DDXMLElement *)elementRpcQuery;

// returns a Jabber-RPC methodCall element
//			<methodCall>
+(DDXMLElement *)elementMethodCall;

// returns a Jabber-RPC methodName element
//				<methodName>method</methodName>
+(DDXMLElement *)elementMethodName:(NSString *)method;

// returns a Jabber-RPC params element
//				<params>
+(DDXMLElement *)elementParams;

#pragma mark -
#pragma mark Disco elements

// returns the Disco query identity element
//   <identity category='automation' type='rpc'/>
+(DDXMLElement *)elementRpcIdentity;

// returns the Disco query feature element
//	 <feature var='jabber:iq:rpc'/>
+(DDXMLElement *)elementRpcFeature;

#pragma mark -
#pragma mark Conversion methods

// encode any object into JabberRPC formatted element
// this method calls the others
+(DDXMLElement *)paramElementFromObject:(id)object;

+(DDXMLElement *)valueElementFromObject:(id)object;

+(DDXMLElement *)valueElementFromArray:(NSArray *)array;
+(DDXMLElement *)valueElementFromDictionary:(NSDictionary *)dictionary;

+(DDXMLElement *)valueElementFromBoolean:(CFBooleanRef)boolean;
+(DDXMLElement *)valueElementFromNumber:(NSNumber *)number;
+(DDXMLElement *)valueElementFromString:(NSString *)string;
+(DDXMLElement *)valueElementFromDate:(NSDate *)date;
+(DDXMLElement *)valueElementFromData:(NSData *)data;

+(DDXMLElement *)valueElementFromElementWithName:(NSString *)elementName value:(NSString *)value;


#pragma mark Wrapper methods

+(DDXMLElement *)wrapElement:(NSString *)elementName aroundElement:(DDXMLElement *)element;
+(DDXMLElement *)wrapValueElementAroundElement:(DDXMLElement *)element;

@end
