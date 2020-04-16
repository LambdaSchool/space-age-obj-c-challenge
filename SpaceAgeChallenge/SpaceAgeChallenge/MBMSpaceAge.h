//
//  MBMSpaceAge.h
//  SpaceAgeChallenge
//
//  Created by Michael on 3/18/20.
//  Copyright © 2020 Michael. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MBMSpaceAge : NSObject

@property NSDateInterval *ageOnEarth;

@property NSDate *startDate;

@property NSDate *endDate;

@property NSTimeInterval *duration;

- (instancetype)initWithStartDate:(NSDate *)startDate
                         duration:(NSTimeInterval)duration;

@end

NS_ASSUME_NONNULL_END
