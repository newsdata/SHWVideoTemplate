//
//  MgcAudioVolumesEventSink.h
//  Runner
//
//  Created by yehot on 2020/6/11.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Flutter/FlutterPlugin.h>

@interface MgcAudioVolumesEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(id)dict;

@end
