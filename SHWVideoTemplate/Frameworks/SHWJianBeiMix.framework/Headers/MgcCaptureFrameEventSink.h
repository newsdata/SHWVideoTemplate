//
//  MgcCaptureFrameEventSink.h
//  Runner
//
//  Created by yehot on 2020/4/17.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/FlutterPlugin.h>


@interface MgcCaptureFrameEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(NSDictionary *)dict;

@end
