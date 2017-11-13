//
//  AGAdModelEnvType.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-08-08.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGAdModelEnvTypeHttp.h"
#import "AGAdModelEnvTypeHttps.h"
#import "AGAdModelEnvTypeFile.h"


@interface AGAdModelEnvType : NSObject

@property (strong, nonatomic) NSDictionary *dict;
@property (strong, nonatomic) AGAdModelEnvTypeHttp *http;
@property (strong, nonatomic) AGAdModelEnvTypeHttps *https;
@property (strong, nonatomic) AGAdModelEnvTypeFile *file;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end
