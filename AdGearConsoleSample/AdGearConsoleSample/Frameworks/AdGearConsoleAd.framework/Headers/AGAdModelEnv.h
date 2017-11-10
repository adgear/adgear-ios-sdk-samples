//
//  AGAdModelEnv.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-17.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGAdModelEnvType.h"

@interface AGAdModelEnv : NSObject

@property (strong, nonatomic) NSDictionary *dict;
@property (strong, nonatomic) AGAdModelEnvType *delivery;
@property (strong, nonatomic) AGAdModelEnvType *assets;

- (instancetype)initWithDict:(NSDictionary *)dict;

- (NSURL *)assetsBaseUrl:(NSString *)scheme;

@end
