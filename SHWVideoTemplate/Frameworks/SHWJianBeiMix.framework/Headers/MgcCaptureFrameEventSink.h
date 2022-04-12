//
//  MgcCaptureFrameEventSink.h
//  Runner
//
//  Created by yehot on 2020/4/17.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterPluginSDK.h>


@interface MgcCaptureFrameEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(NSDictionary *)dict;

@end
