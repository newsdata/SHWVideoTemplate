//
//  MgcMixViewUtil.h
//  Runner
//
//  Created by yehot on 2020/6/18.
//  Copyright © 2020 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BPMixWindow.h"

@interface MgcMixViewUtil : NSObject

+ (NSMutableArray *)viewsArrayWithDictArray:(NSArray *)dictArray;
+ (NSMutableArray *)viewsArrayWithJsonStr:(NSString *)str;
+ (NSMutableArray *)mixAudioArrayWithJsonArray:(NSArray<NSString *> *)strArray;

+ (BPMixMediaView *)mixMediaViewsWithJsonStr:(NSString *)str;
+ (NSMutableArray *)mixSubtitleArrayWithJsonArray:(NSArray<NSString *> *)strArray;

+ (NSMutableArray<BPMixMediaView *> *)mixViewsArrayWithJsonArray:(NSArray<NSString *> *)strArray;

@end
