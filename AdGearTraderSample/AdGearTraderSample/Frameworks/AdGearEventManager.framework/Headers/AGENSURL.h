//
//  AGENSURL.h
//  AdGearEventManager
//
//  Created by Boulat on 2016-02-23.
//  Copyright © 2016 AdGear. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (AGENSURL)

+ (NSURL *)ageEventUrlWithName:(NSString *)name;
- (NSURL *)ageUrlByAppendingPathComponent:(NSString *)pathComponent;
- (NSURL *)ageUrlByAppendingQueryParameter:(NSString *)name withValue:(NSString *)value;
- (NSURL *)ageUrlByAppendingQueryParameters:(NSDictionary *)params;
- (NSURL *)ageUrlByAppendingIfaQueryParameters:(NSString *)ifaParamName;
- (NSURL *)ageUrlByAppendingIfaQueryParameters;

@end
