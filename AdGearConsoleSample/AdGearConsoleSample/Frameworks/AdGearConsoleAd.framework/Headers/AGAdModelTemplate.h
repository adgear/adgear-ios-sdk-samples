//
//  AGAdModelTemplate.h
//  AdGearConsoleAd
//
//  Created by Boulat Oulmachev on 2017-08-01.
//  Copyright © 2017 Boulat Oulmachev. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AGAdModelTemplate) {
    AGAdModelTemplateUnknown = 0,
    AGAdModelTemplateImage = 1,
    AGAdModelTemplateJavaScript = 2,
    AGAdModelTemplateThirdParty = 3,
    AGAdModelTemplateHtml5 = 4
};

@interface NSString (AGAdModelTemplateEnumParser)
- (AGAdModelTemplate)agAdModelTemplateEnumFromString;
@end
