//
//  AGRelatedWebViewManager.h
//  Pods
//
//  Created by Bussiere, Mathieu on 2017-01-20.
//
//

#import <Foundation/Foundation.h>

@class WKWebView;

NS_ASSUME_NONNULL_BEGIN

@interface AGRelatedWebViewManager : NSObject

+ (AGRelatedWebViewManager *)sharedInstance;

- (WKWebView *)AG_relatedWebView;

@end

NS_ASSUME_NONNULL_END
