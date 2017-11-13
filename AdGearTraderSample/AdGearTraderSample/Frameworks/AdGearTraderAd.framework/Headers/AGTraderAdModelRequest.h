//
//  AGTraderAdModelRequest.h
//  AdGearTraderAd
//
//  Created by Boulat Oulmachev on 2017-09-07.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGTraderAdModel.h"

@interface AGTraderAdModelRequest : NSObject

+ (void)requestAdModelWithUrl:(NSURL *)url andCompletion:(void(^)(AGTraderAdModel *adModel, NSError *error))handler;

+ (NSURL *)makeUrlForSiteTagId:(NSString *)siteTagId width:(int)width height:(int)height;

@end
