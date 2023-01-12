#import <Foundation/Foundation.h>
#import "DDXMLNode.h"

@interface DDXMLNode (CDATA)

/**
 Creates a new XML element with an inner CDATA block
 <name><![CDATA[string]]></name>
 */
+ (id)cdataElementWithName:(NSString *)name stringValue:(NSString *)string;

@end
