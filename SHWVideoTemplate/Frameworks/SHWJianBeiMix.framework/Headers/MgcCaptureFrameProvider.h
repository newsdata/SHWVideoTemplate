//
//  MgcCaptureFrameProvider.h
//  Runner
//
//  Created by Ray on 2020/3/27.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MgcCaptureFrameProvider : NSObject

- (BOOL)captureFrameWithParams:(NSDictionary *)params;

- (BOOL)captureSvgFrameWithParams:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
