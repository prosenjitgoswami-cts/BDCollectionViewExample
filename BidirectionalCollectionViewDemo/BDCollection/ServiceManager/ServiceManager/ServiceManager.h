//
//  ServiceManager.h
//  BidirectionalCollectionViewDemo
//
//  Created by Prsenjit Goswami on 21/12/16.
//  Copyright © 2016 Prosenit . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModelBinder.h"

@interface ServiceManager : NSObject


+ (void)fetchData:(void(^)(NSArray *results, NSError*error, NSDictionary *eInfo))completion;

@end
