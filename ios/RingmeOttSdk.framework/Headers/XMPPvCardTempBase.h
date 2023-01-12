//
//  XMPPvCardTempBase.h
//  XEP-0054 vCard-temp
//
//  Created by Eric Chamberlain on 3/9/11.
//  Copyright 2011 RF.com. All rights reserved.
//  Copyright 2010 Martin Morrison. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "DDXMLElement.h"

#define XMPP_VCARD_SET_EMPTY_CHILD(Set, Name)                                                   \
	if (Set) {                                                                                  \
		[self addChild:[DDXMLElement elementWithName:(Name)]];                                  \
	}                                                                                           \
	else if (!(Set)) {                                                                          \
		[self removeChildAtIndex:[[self children] indexOfObject:[self elementForName:(Name)]]]; \
	}


#define XMPP_VCARD_SET_STRING_CHILD(Value, Name)						\
	DDXMLElement *elem = [self elementForName:(Name)];					\
	if ((Value) != nil)                                                 \
	{                                                                   \
		if (elem == nil) {												\
			elem = [DDXMLElement elementWithName:(Name)];				\
            [self addChild:elem];                                       \
		}                                                               \
		[elem setStringValue:(Value)];									\
	}                                                                   \
	else if (elem != nil) {											    \
		[self removeChildAtIndex:[[self children] indexOfObject:elem]];	\
	}


#define XMPP_VCARD_SET_N_CHILD(Value, Name)								\
	DDXMLElement *name = [self elementForName:@"N"];					\
	if ((Value) != nil && name == nil)                                  \
	{                                                                   \
		name = [DDXMLElement elementWithName:@"N"];						\
		[self addChild:name];											\
	}																	\
                                                                        \
	DDXMLElement *part = [name elementForName:(Name)];					\
	if ((Value) != nil && part == nil)                                  \
	{								                                    \
		part = [DDXMLElement elementWithName:(Name)];					\
		[name addChild:part];											\
	}																	\
	                                                                    \
	if (Value)                                                          \
	{                                                                   \
		[part setStringValue:(Value)];									\
	}                                                                   \
	else if (part != nil)                                               \
	{                                                                   \
		/* N is mandatory, so we leave it in. */						\
		[name removeChildAtIndex:[[self children] indexOfObject:part]];	\
	}


@interface XMPPvCardTempBase : DDXMLElement <NSSecureCoding, NSCopying> {

}

@end
