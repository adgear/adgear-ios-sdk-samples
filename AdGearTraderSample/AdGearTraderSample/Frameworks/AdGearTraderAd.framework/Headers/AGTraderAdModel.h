//
//  AGTraderAdModel.h
//  AdGearTraderAd
//
//  Created by Boulat Oulmachev on 2017-09-07.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AGTraderAdModel : NSObject

@property (nonatomic, strong) NSString *wincur;
@property double wincpm;
@property (nonatomic, strong) NSString *dealid;
@property int width;
@property int height;
@property (nonatomic, strong) NSString *html;
@property (nonatomic, strong) NSString *jsonString;

+ (void)makeAsyncWithData:(NSData *)data completion:(void(^)(AGTraderAdModel *adModel, NSError *error))handler;

- (instancetype)initWithData:(NSData *)data error:(NSError **)error;
- (instancetype)initWithJsonString:(NSString *)jsonString error:(NSError **)error;
- (instancetype)initWithDict:(NSDictionary *)dict jsonString:(NSString *)jsonString error:(NSError **)error;
- (void)replaceTokens:(NSString *)htmlPayload completion:(void(^)(NSString *html, NSError *error))handler;

@end
