//
//  AGENSDictionary.h
//  AdGearEventManager
//
//  Created by Boulat on 2016-02-24.
//  Copyright © 2016 AdGear. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (AGENSDictionary)

- (NSString *)ageString:(NSString *)key;
- (NSNumber *)ageNumber:(NSString *)key;
- (NSString *)ageQueryString;
- (NSString *)ageJsonString;

@end
