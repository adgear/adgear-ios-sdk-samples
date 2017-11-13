//
//  AGConsoleAdFactory.h
//  AdGearSpotView
//
//  Created by Boulat Oulmachev on 2017-09-25.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AGSpotViewAd.h"

@import AdGearConsoleAd;

@interface AGConsoleAdFactory : NSObject

+ (void)makeSpotViewAdWithSpotId:(NSString *)spotId params:(NSDictionary *)params completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

+ (void)makeSpotViewAdWithUrl:(NSURL *)url completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

+ (void)makeSpotViewAdWithPreviewUrl:(NSURL *)url completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

+ (void)makeSpotViewAdWithCacheKey:(NSString *)cacheKey completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

+ (void)makeSpotViewAdWithJsonString:(NSString *)cacheKey completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

+ (void)makeSpotViewAdWithConsoleAdModel:(AGConsoleAdModel *)consoleAdModel completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

@end
