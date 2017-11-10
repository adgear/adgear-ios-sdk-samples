//
//  ViewController.m
//  AdGearConsoleSample
//
//  Created by Boulat Oulmachev on 2017-11-10.
//  Copyright © 2017 AdGear. All rights reserved.
//

#import "ViewController.h"

@import AdGearSpotView;

@interface ViewController ()

@property (weak, nonatomic) IBOutlet AGSpotView *spotView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [AGConsoleAdFactory makeSpotViewAdWithSpotId:@"10746221" params:nil completion:^(AGSpotViewAd *spotViewAd, NSError *error) {
        if (error != nil) {
            NSLog(@"Error: %@", error);
            return;
        }
        [self.spotView loadAd:spotViewAd];
    }];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
