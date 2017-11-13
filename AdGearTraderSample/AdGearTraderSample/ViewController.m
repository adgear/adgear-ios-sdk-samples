//
//  ViewController.m
//  AdGearTraderSample
//
//  Created by Boulat Oulmachev on 2017-11-10.
//  Copyright © 2017 AdGear. All rights reserved.
//

#import "ViewController.h"

@import AdGearSpotView;

@interface ViewController ()
@property (weak, nonatomic) IBOutlet AGSpotView *spotView;
@property (strong, nonatomic) NSString *siteTagId;
@property (strong, nonatomic) NSString *segmentId;
@property (strong, nonatomic) NSString *apiKey;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.siteTagId = @"YOUR_SITE_TAG_ID";
    self.segmentId = @"YOUR_SEGMENT_ID";
    self.apiKey = @"YOUR_API_KEY";
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (IBAction)loadTraderAd:(id)sender {
    self.spotView.hidden = YES;
    [AGTraderAdFactory makeSpotViewAdWithSiteTagId:self.siteTagId width:300 height:250 completion:^(AGSpotViewAd *spotViewAd, NSError *error) {
        if (error != nil) {
            NSLog(@"error: %@", error);
            return;
        }
        self.spotView.hidden = NO;
        [self.spotView loadAd:spotViewAd];
    }];
}

- (IBAction)addDeviceToTraderSegment:(id)sender {
    AGTraderSegment *segment = [AGTraderSegment segment:self.segmentId apiKey:self.apiKey];
    [segment setTtl: 60*60*24*15];
    [segment setXd:YES];
    [segment setShouleQueue:NO];
    [segment addDeviceWithCompletion:^(NSNumber *status, NSURL *url, NSError *error) {
        if (error != nil) {
            NSLog(@"ERROR: %@", error);
        }
        NSString *statusString = status == nil ? @"UNKNOWN" : [status boolValue] ? @"SUCCESS" : @"FAILED";
        NSLog(@"status: %@ url: %@", statusString, url);
    }];
}

- (IBAction)removeDeviceFromTraderSegment:(id)sender {
    AGTraderSegment *segment = [AGTraderSegment segment:self.segmentId apiKey:self.apiKey];
    [segment setXd:YES];
    [segment setShouleQueue:NO];
    [segment removeDeviceWithCompletion:^(NSNumber *status, NSURL *url, NSError *error) {
        if (error != nil) {
            NSLog(@"ERROR: %@", error);
        }
        NSString *statusString = status == nil ? @"UNKNOWN" : [status boolValue] ? @"SUCCESS" : @"FAILED";
        NSLog(@"status: %@ url: %@", statusString, url);
    }];
}

@end
