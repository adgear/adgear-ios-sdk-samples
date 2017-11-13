//
//  AGConsoleAdCacheManager.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-17.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGConsoleAdModel.h"

@interface AGConsoleAdCacheManager : NSObject
+ (void)fetchCachedAdModelWithCacheKey:(NSString *)cacheKey andCompletion:(void(^)(AGConsoleAdModel *adModel, NSError *error))handler;
+ (void)fetchCachedAdKeys:(void(^)(NSArray *keys, NSError *error))handler;
+ (void)deleteCachedAd:(NSString *)cacheKey andCompletion:(void(^)(NSError *error))handler;
@end
