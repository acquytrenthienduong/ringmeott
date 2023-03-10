#import <CoreData/CoreData.h>
#import "DDXML.h"

@class XMPPCapsResourceCoreDataStorageObject;


@interface XMPPCapsCoreDataStorageObject : NSManagedObject

@property (nonatomic, strong) DDXMLElement *capabilities;

@property (nonatomic, strong) NSString * hashStr;
@property (nonatomic, strong) NSString * hashAlgorithm;
@property (nonatomic, strong) NSString * capabilitiesStr;

@property (nonatomic, strong) NSSet * resources;

@end


@interface XMPPCapsCoreDataStorageObject (CoreDataGeneratedAccessors)

- (void)addResourcesObject:(XMPPCapsResourceCoreDataStorageObject *)value;
- (void)removeResourcesObject:(XMPPCapsResourceCoreDataStorageObject *)value;
- (void)addResources:(NSSet *)value;
- (void)removeResources:(NSSet *)value;

@end
