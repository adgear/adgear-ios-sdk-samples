//
//  AGConsoleAdModel.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-07-17.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGAdModelEnv.h"
#import "AGAdModelUrl.h"
#import "AGAdModelUrls.h"
#import "AGAdModelValues.h"
#import "AGAdModelTemplate.h"

@interface AGConsoleAdModel : NSObject

@property (nonatomic) AGAdModelTemplate template;
@property (nonatomic, strong) AGAdModelEnv *env;
@property (nonatomic, strong) AGAdModelUrl *impressionTracker;
@property (nonatomic, strong) AGAdModelUrl *clickTracker;
@property (nonatomic, strong) AGAdModelUrls *clicks;
@property (nonatomic, strong) AGAdModelValues *declaredClickUrls;
@property (nonatomic, strong) AGAdModelUrls *interactions;
@property (nonatomic, strong) AGAdModelUrls *files;
@property (nonatomic, strong) AGAdModelValues *variables;
@property (nonatomic, strong) NSDictionary *localCacheData;
@property (nonatomic, strong) NSString *jsonString;
@property (nonatomic, strong) NSDictionary *dict;

+ (void)makeAsyncWithData:(NSData *)data completion:(void(^)(AGConsoleAdModel *adModel, NSError *error))handler;

- (instancetype)initWithData:(NSData *)data error:(NSError **)error;
- (instancetype)initWithJsonString:(NSString *)jsonString error:(NSError **)error;
- (instancetype)initWithDict:(NSDictionary *)dict jsonString:(NSString *)jsonString error:(NSError **)error;

- (NSURL *)assetsBaseUrl;
- (NSURL *)impressionTrackerUrl;
- (NSURL *)clickTrackerUrl;
- (NSURL *)clickUrl:(NSString *)key;
- (NSURL *)interactionUrl:(NSString *)key;
- (NSString *)interactionName:(NSURL *)url;
- (NSArray *)fileKeys;
- (NSString *)filePath:(NSString *)key;
- (NSURL *)fileUrl:(NSString *)key;
- (NSString *)variable:(NSString *)key;
- (NSString *)generateKey;
+ (NSString *)cacheAdsDir;
- (void)cacheAdToLocalStorage:(NSString *)cacheKey cacheData:(NSDictionary *)cacheData completion:(void(^)(AGConsoleAdModel *adModel, NSError *error))handler;
- (void)registerClickTrackerUrl:(void(^)(NSError *error))handler;
- (void)registerImpressionUrl:(void(^)(NSError *error))handler;
- (void)registerInteractionUrl:(NSString *)interaction completion:(void(^)(NSError *error))handler;
- (void)replaceTokens:(NSString *)htmlPayload copletion:(void(^)(NSString *htmlPayload, NSError *error))handler;

@end
