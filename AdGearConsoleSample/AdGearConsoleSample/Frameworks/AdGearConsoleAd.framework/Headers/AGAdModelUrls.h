//
//  AGAdModelUrls.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-19.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGAdModelUrl.h"
#import "AGAdModelEnvType.h"
#import "AGAdModelValues.h"

@interface AGAdModelUrls : AGAdModelValues
@property (nonatomic, strong) NSDictionary<NSString*, AGAdModelUrl*> *urls;

- (instancetype)initWithEnvType:(AGAdModelEnvType *)envType andDict:(NSDictionary *)dict;

- (NSString *)nameForUrl:(NSURL *)url;

@end
