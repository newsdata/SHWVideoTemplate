//
//  MgcAudioExtractEventSink.h
//  Runner
//
//  Created by yehot on 2020/4/17.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/FlutterPlugin.h>

extern NSString *const KAudioExtractEventName;

@interface MgcAudioExtractEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(NSDictionary *)dict;

@end

