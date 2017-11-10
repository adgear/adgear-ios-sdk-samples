//
//  AGAdModelValues.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-19.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AGAdModelValues : NSObject

@property (nonatomic, strong) NSDictionary<NSString*, NSString*> *values;

- (instancetype)initWithDict:(NSDictionary *)dict;

- (NSString *)stringForKey:(NSString *)key;

@end
