//
//  AGConsoleAdModelRequest.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-17.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGConsoleAdModel.h"

@interface AGConsoleAdModelRequest : NSObject

+ (void)requestAdModelWithUrl:(NSURL *)url andCompletion:(void(^)(AGConsoleAdModel *adModel, NSError *error))handler;
+ (NSURL *)makeUrlForSpotId:(NSString *)spotId;
+ (NSURL *)makeUrlForSpotId:(NSString *)spotId andTargetingParameters:(NSDictionary *)params;
+ (NSURL *)makeIdempotentUrlForSpotId:(NSString *)spotId andTargetingParameters:(NSDictionary *)params;

@end
