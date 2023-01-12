#import <Foundation/Foundation.h>
#import "DDXML.h"

@interface DDXMLElement (XEP_0335)

- (DDXMLElement *)JSONContainer;

- (BOOL)isJSONContainer;
- (BOOL)hasJSONContainer;

- (NSString *)JSONContainerString;
- (NSData *)JSONContainerData;
- (id)JSONContainerObject;

- (void)addJSONContainerWithString:(NSString *)JSONContainerString;
- (void)addJSONContainerWithData:(NSData *)JSONContainerData;
- (void)addJSONContainerWithObject:(id)JSONContainerObject;

@end
