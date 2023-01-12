#import <Foundation/Foundation.h>
#import "XMPPSASLAuthentication.h"
#import "XMPPStream.h"


@interface XMPPDeprecatedDigestAuthentication : NSObject <XMPPSASLAuthentication>

// This class implements the XMPPSASLAuthentication protocol.
// 
// See XMPPSASLAuthentication.h for more information.
- (id)initWithStream:(XMPPStream *)stream password:(NSString *)inPassword loginMechanism:(NSString *)loginMechanism authenType:(NSString *)authenType;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@interface XMPPStream (XMPPDeprecatedDigestAuthentication)

- (BOOL)supportsDeprecatedDigestAuthentication;

@end
