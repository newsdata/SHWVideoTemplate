//
//  BPPhoneMonitor.h
//  JianBei
//
//  Created by yehot on 2019/11/13.
//  Copyright © 2019 Xin Hua Zhi Yun. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BPCallEvent) {
    BPCallEvent_None            = 0,
    BPCallEvent_Incoming        = 1,    ///< 来电话
    BPCallEvent_Disconnected    = 2,    ///< 挂断
};

typedef void(^BPPhoneCallback)(BPCallEvent event);

/**
 *  监听来电
 */
@interface BPPhoneMonitor : NSObject

- (instancetype)initWithCallEventHandler:(BPPhoneCallback)callback;

@end

NS_ASSUME_NONNULL_END
