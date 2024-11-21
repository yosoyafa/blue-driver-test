//
//  OrderedDictionary.h
//  BlueDriver
//
//  Created by Andrew Butt on 2015-07-23.
//  Copyright (c) 2015 Root Four Imagination Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderedDictionary : NSObject <NSCoding>
{
    NSMutableDictionary *dictionary;
    NSMutableArray *array;
}

- (void)addEntriesFromOrderedDictionary:(OrderedDictionary*)otherDictionary;
- (void)addEntriesFromDictionary:(NSDictionary*)otherDictionary;
- (void)removeAllObjects;
- (void)insertObject:(id)anObject forKey:(id)aKey atIndex:(NSUInteger)anIndex;
- (id)keyAtIndex:(NSUInteger)anIndex;
- (NSEnumerator *)reverseKeyEnumerator;
- (void)setObject:(id)anObject forKey:(id)aKey;
- (NSArray*)allKeys;
- (id)objectForKey:(id)aKey;
- (NSUInteger)count;
@end
