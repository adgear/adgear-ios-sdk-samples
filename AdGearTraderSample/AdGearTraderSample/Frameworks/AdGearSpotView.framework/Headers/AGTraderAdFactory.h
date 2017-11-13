//
//  AGTraderAdFactory.h
//  AdGearSpotView
//
//  Created by Boulat Oulmachev on 2017-10-16.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AGSpotViewAd.h"

@import AdGearTraderAd;

@interface AGTraderAdFactory : NSObject

+ (void)makeSpotViewAdWithSiteTagId:(NSString *)siteTagId width:(int)width height:(int)height completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

+ (void)makeSpotViewAdWithTraderAd:(AGTraderAdModel *)adModel completion:(void(^)(AGSpotViewAd *spotViewAd, NSError *error))handler;

@end
