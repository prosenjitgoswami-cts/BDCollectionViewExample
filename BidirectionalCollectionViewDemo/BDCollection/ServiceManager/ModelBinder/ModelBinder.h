//
//  ModelBinder.h
//  BidirectionalCollectionViewDemo
//
//  Created by Prsenjit Goswami on 21/12/16.
//  Copyright © 2016 Prosenit . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnumMaster.h"

@interface ModelBinder : NSObject
+ (NSArray *)modelBinderWithOperationKey:(ServiceOperationKey)operationKey
                                response:(id)response
                               extraInfo:(NSDictionary *)extraInfo;

@end
