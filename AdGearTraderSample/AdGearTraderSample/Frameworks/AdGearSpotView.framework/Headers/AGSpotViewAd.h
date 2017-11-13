//
//  AGSpotViewAd.h
//  AdGearSpotView
//
//  Created by Boulat Oulmachev on 2017-09-13.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>

@import AdGearEventManager;
@import AdGearConsoleAd;
@import AdGearTraderAd;

@interface AGSpotViewAd : NSObject

@property (nonatomic, strong) AGConsoleAdModel *consoleAdModel;
@property (nonatomic, strong) AGTraderAdModel *traderAdModel;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *html;

- (instancetype)initWithConsoleAdModel:(AGConsoleAdModel *)adModel;

- (instancetype)initWithTraderAdModel:(AGTraderAdModel *)adModel;

- (NSURL *)baseUrl;
- (NSString *)interactionName:(NSURL *)url;
- (NSURL *)clickUrl:(NSString *)key;
- (void)registerImpressionUrl:(void(^)(NSError *error))handler;

@end
