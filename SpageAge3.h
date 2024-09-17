//
//  SpageAge3.h
//  SpaceAgeObjC_Challenge
//
//  Created by Joe Veverka on 7/15/20.
//  Copyright © 2020 joshua kaunert. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SpageAge3 : NSObject


@property NSDateInterval *ageOnEarth;
@property NSDate *startDate;
@property NSDate *endDate;
@property NSTimeInterval *duration;



typedef enum{
    
    Earth = 31557600,
    
    Mercury,
    
    Venus,
    
    Mars,
    
    Jupiter,
    
    Saturn,
    
    Uranus,
    
    Neptune
    
} planets;

@property (nonatomic, assign) planets planet;


- (instancetype)initWithStartDate:(NSDate *)startDate
                         duration:(NSTimeInterval)duration;

@end

NS_ASSUME_NONNULL_END
