//
//  AGENSString.h
//  AdGearEventManager
//
//  Created by Boulat on 2016-02-24.
//  Copyright © 2016 AdGear. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AGENSString)

+ (NSString *)ageDirPath;
+ (NSString *)ageDbFilePath;
- (NSString *)ageUrlEscapeString;

+ (NSString *)ageRandom;
+ (NSString *)ageLocalTime;
- (NSString *)ageMD5String;

+ (NSString *)ageTimestamp;

- (NSData *)ageNSData;

+ (NSString *)ageStringWithContentsOfFile:(NSString *)file ofType:(NSString *)type bundle:(NSBundle *)bundle error:(NSError **)error;

@end
