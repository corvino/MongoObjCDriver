//
//  MODDBPointer.h
//  MongoHub
//
//  Created by Jérôme Lebel on 29/09/2011.
//

#import <Foundation/Foundation.h>

@class MODObjectId;

@interface MODDBPointer : NSObject
{
    NSString                    *_collectionName;
    MODObjectId                 *_objectId;
}
@property (nonatomic, readonly, strong) NSString *collectionName;
@property (nonatomic, readonly, strong) MODObjectId *objectId;

- (id)initWithCollectionName:(NSString *)collectionName objectId:(MODObjectId *)objectId;;
- (NSString *)jsonValueWithPretty:(BOOL)pretty strictJSON:(BOOL)strictJSON;

@end