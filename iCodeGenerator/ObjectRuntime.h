//
//  ObjectRuntime.h
//  NSCodingGenerator
//
//  Created by Ma Jianglin on 4/28/13.
//  Copyright (c) 2013 Ma Jianglin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjectRuntime : NSObject

+ (NSString*)nameForType:(NSString*)type;

+ (NSMutableDictionary*)ivarForClass:(Class)klass;

@end
