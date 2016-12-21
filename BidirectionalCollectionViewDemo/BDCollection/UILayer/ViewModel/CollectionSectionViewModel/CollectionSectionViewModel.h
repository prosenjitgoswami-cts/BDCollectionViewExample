//
//  CollectionSectionViewModel.h
//  BidirectionalCollectionViewDemo
//
//  Created by Prsenjit Goswami on 21/12/16.
//  Copyright © 2016 Prosenit . All rights reserved.
//

#import <Foundation/Foundation.h>
@class CollectionViewModel;

@interface CollectionSectionViewModel : NSObject
@property (strong, nonatomic) NSString *sectionHeader;
@property (strong, nonatomic) NSArray <CollectionViewModel *> *collections;

@end
