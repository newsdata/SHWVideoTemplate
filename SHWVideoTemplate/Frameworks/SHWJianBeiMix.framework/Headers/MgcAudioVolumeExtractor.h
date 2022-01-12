//
//  MgcAudioVolumeExtractor.h
//  Runner
//
//  Created by yehot on 2020/6/11.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^MgcAudioVolumeExtractorCallback)(NSArray* array);

@interface MgcAudioVolumeExtractor : NSObject

+ (void)getAudioVolume:(NSString*)audioPath
                result:(MgcAudioVolumeExtractorCallback)callback;

@end
