//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Doug Goss on 2/11/14.
//  Copyright (c) 2014 Doug Goss. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject
{
    NSMutableArray *allItems;
    
}

+ (BNRItemStore *)sharedStore;
- (void)moveItemAtIndex:(int)from toIndex:(int)to;

- (NSArray *)allItems;
- (BNRItem *)createItem;
- (void)removeItem:(BNRItem *)p;


@end
