#import <Foundation/Foundation.h>
#import "DDXML.h"

@interface XMPPParser : NSObject

- (id)initWithDelegate:(id)delegate delegateQueue:(dispatch_queue_t)dq;
- (id)initWithDelegate:(id)delegate delegateQueue:(dispatch_queue_t)dq parserQueue:(dispatch_queue_t)pq;

- (void)setDelegate:(id)delegate delegateQueue:(dispatch_queue_t)delegateQueue;

/**
 * Asynchronously parses the given data.
 * The delegate methods will be dispatch_async'd as events occur.
**/
- (void)parseData:(NSData *)data;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol XMPPParserDelegate
@optional

- (void)xmppParser:(XMPPParser *)sender didReadRoot:(DDXMLElement *)root;

- (void)xmppParser:(XMPPParser *)sender didReadElement:(DDXMLElement *)element;

- (void)xmppParserDidEnd:(XMPPParser *)sender;

- (void)xmppParser:(XMPPParser *)sender didFail:(NSError *)error;

- (void)xmppParserDidParseData:(XMPPParser *)sender;

@end
