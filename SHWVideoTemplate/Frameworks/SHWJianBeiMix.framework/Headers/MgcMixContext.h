//
//  MgcMixContext.h
//  Runner
//
//  Created by yehot on 2019/12/7.
//  Copyright © 2019 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BPMixWindow.h"

/**
    对应 flutter 层的 mix window 结构
    需要转换成 BPMixWindow
 */
@interface MgcMixContext : NSObject

@property (nonatomic, assign) int width;
@property (nonatomic, assign) int height;

/** 视频/图片 主轴 */
@property (nonatomic, strong) NSMutableArray<BPMixView *> *videos;
/** 贴图 */
@property (nonatomic, strong) NSMutableArray<BPMixView *> *attaches;
/** 音频列表：包括 BGM、录音 */
@property (nonatomic, strong) NSMutableArray<BPMixAudio *> *audios;

/** 旧版字幕 */
@property (nonatomic, strong) NSMutableArray<BPMixSubtitleView *> *subtitles;

/** 新版字幕 */
@property (nonatomic, strong) NSMutableArray<MgcMixSubtitleView *> *mixSubtitles;


/** 转场， key 是转场在 videos 里的 index */
@property (nonatomic, strong) NSMutableDictionary<NSNumber *, BPMixTransitionView *> *transitionMap;

@property (nonatomic, strong) NSMutableArray<BPMixSvgView *> *svgSubtitles;

- (instancetype)initWithJsonString:(NSString *)str;
- (BPMixWindow *)toMixWindow;

@end
