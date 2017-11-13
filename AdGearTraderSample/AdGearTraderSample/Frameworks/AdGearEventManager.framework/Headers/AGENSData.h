//
//  AGENSData.h
//  AdGearEventManager
//
//  Created by Boulat Oulmachev on 2017-09-26.
//  Copyright © 2017 AdGear. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AGENSData)

- (NSDictionary *)ageNSDictionary;
- (NSString *)ageNSString;
- (void)ageWriteToFile:(NSString *)path error:(NSError **)error;

@end

