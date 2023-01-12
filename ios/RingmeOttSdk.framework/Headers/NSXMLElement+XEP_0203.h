#import <Foundation/Foundation.h>
#import "DDXML.h"

@interface DDXMLElement (XEP_0203)

- (BOOL)wasDelayed;
- (NSDate *)delayedDeliveryDate;

@end
