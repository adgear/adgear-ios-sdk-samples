//
//  AGAdModelEnvTypeFile.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-17.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface AGAdModelEnvTypeFile : NSObject

@property (strong, nonatomic) NSString *hostname;
@property (strong, nonatomic) NSString *bucket;

- (instancetype)initWithDict:(NSDictionary *)dict;

- (NSURL *)baseUrl;

@end
