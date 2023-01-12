#import <Foundation/Foundation.h>
#import "DDXML.h"

@class XMPPResultSet;

@interface DDXMLElement (XEP_0059)

- (BOOL)isResultSet;
- (BOOL)hasResultSet;
- (XMPPResultSet *)resultSet;

@end
