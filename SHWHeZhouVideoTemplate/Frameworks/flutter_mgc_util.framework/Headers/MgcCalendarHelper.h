//
//  MgcCalendarHelper.h
//  Runner
//
//  Created by Ray on 2020/4/10.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MgcCalendarHelper : NSObject

+ (void)addCalendarEventWithTitle:(NSString *)title
                             desp:(NSString *)desp
                        startTime:(NSTimeInterval)startTime
                          endTime:(NSTimeInterval)endTime
                        alertTime:(NSTimeInterval)alertTime
                          success:(void (^)(NSString *eventId))block;


+ (BOOL)deleteCalendarEventWithId:(NSString *)eventId;

@end

NS_ASSUME_NONNULL_END
