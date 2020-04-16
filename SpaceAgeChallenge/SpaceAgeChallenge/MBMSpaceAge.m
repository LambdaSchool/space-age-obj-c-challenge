//
//  MBMSpaceAge.m
//  SpaceAgeChallenge
//
//  Created by Michael on 3/18/20.
//  Copyright © 2020 Michael. All rights reserved.
//

#import "MBMSpaceAge.h"

@implementation MBMSpaceAge


- (instancetype)initWithStartDate:(NSDate *)startDate duration:(NSTimeInterval)duration {
    self = [super init];
    if (self) {
        _startDate = startDate;
        _duration = &duration;
    }
    return self;
}

@end
