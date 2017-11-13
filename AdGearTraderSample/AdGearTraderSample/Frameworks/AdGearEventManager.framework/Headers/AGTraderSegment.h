//
//  AGTraderSegment.h
//  AdGearEventManager
//
//  Created by Boulat Oulmachev on 2017-11-06.
//  Copyright © 2017 AdGear. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AGTraderSegment : NSObject

@property (nonatomic, strong) NSString *segment;
@property (nonatomic, strong) NSString *apiKey;
@property int ttl;
@property BOOL xd;
@property BOOL shouleQueue;
@property (nonatomic, strong) NSString *ifa;
@property (nonatomic, strong) NSString *baseUrl;

+ (instancetype)segment:(NSString *)segment apiKey:(NSString *)apiKey;
- (NSURL *)makeUrl:(NSError **)error;
- (void)addDeviceWithCompletion:(void(^)(NSNumber *status, NSURL *url, NSError *error))handler;
- (void)removeDeviceWithCompletion:(void(^)(NSNumber *status, NSURL *url, NSError *error))handler;

@end
