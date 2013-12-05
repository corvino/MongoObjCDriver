//
//  MODBsonComparator.h
//  mongo-objc-driver
//
//  Created by Jérôme Lebel on 05/12/2013.
//
//

#import <Foundation/Foundation.h>

@interface MODBsonComparator : NSObject
@property (nonatomic, readonly, strong) NSData *bson1;
@property (nonatomic, readonly, strong) NSData *bson2;
@property (nonatomic, readonly, strong) NSArray *differences;

- (id)initWithBson1:(NSData *)bson1 bson2:(NSData *)bson2;
- (void)compare;

@end
