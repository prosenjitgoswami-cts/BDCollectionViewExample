//
//  ServiceManager.m
//  BidirectionalCollectionViewDemo
//
//  Created by Prsenjit Goswami on 21/12/16.
//  Copyright © 2016 Prosenit . All rights reserved.
//

#import "ServiceManager.h"

@implementation ServiceManager

#pragma mark - Public Method 

+ (void)fetchData:(void(^)(NSArray *results, NSError*error, NSDictionary *eInfo))completion {

    NSError *error = nil;

    NSArray *bindedResults = [ModelBinder modelBinderWithOperationKey:NULL
                                    response:NULL
                                   extraInfo:NULL];

    if(completion)
        completion (bindedResults, error, nil);
    
}

@end
