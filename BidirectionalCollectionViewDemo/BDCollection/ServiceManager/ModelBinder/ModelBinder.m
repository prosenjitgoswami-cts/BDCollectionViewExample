//
//  ModelBinder.m
//  BidirectionalCollectionViewDemo
//
//  Created by Prsenjit Goswami on 21/12/16.
//  Copyright © 2016 Prosenit . All rights reserved.
//

#import "ModelBinder.h"

@implementation ModelBinder

#pragma mark - Public Method

+ (NSArray *)modelBinderWithOperationKey:(ServiceOperationKey)operationKey
                                response:(id)response
                               extraInfo:(NSDictionary *)extraInfo {

    NSMutableArray *collections = [NSMutableArray array];

    switch (operationKey) {
        case ServiceOperationKey1:

            break;

        default:
            break;
    }

    return collections;
}

#pragma mark - Private Methods


@end
