//
//  MgcAudioExtractEventSink.h
//  Runner
//
//  Created by yehot on 2020/4/17.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterPluginSDK.h>

extern NSString *const KAudioExtractEventName;

@interface MgcAudioExtractEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(NSDictionary *)dict;

@end

