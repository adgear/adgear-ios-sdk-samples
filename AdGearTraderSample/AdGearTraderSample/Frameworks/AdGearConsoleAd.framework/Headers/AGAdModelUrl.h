//
//  AGAdModelUrl.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-17.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGAdModelEnvType.h"

@interface AGAdModelUrl : NSObject

@property (nonatomic, strong) NSString *path;
@property AGAdModelEnvType *envType;

- (instancetype)initWithPath:(NSString *)path andEnvType:(AGAdModelEnvType *)envType;

- (NSURL *)makeFileUrl:(NSString *)scheme;
- (NSURL *)makeUrl:(NSString *)scheme;

@end
