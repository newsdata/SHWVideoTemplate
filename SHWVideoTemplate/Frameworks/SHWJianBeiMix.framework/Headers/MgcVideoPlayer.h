//
//  MgcVideoPlayer.h
//  Runner
//
//  Created by yehot on 2019/12/3.
//  Copyright © 2019 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterSDK.h>

@class BPMixWindow;

@class BPMixMediaView;

@class BPMixAudio;

@class MgcMixSubtitleView;

typedef void(^RenderOnceBlock)(void);

@interface MgcVideoPlayer : NSObject <FlutterTexture, FlutterStreamHandler>

@property(nonatomic, strong) FlutterEventChannel* eventChannel;

@property (nonatomic, assign, readonly) int64_t texture_id;

@property (nonatomic, copy) RenderOnceBlock onceBlock;

// NOTE: window 传入 player 需要对 config.width 进行校正
- (instancetype)initWithPlayData:(BPMixWindow *)bpWindow
                       registrar:(NSObject<FlutterTextureRegistry> *)registrar;
- (void)resetWithData:(BPMixWindow *)window
               seekTo:(int)position
            needPause:(BOOL)pause;
- (void)dispose;

// ******************** play control  ************************
- (void)play;
- (void)pause;
- (int64_t)position;
- (int64_t)duration;
- (void)seekTo:(int)location;
- (void)setIsLooping:(bool)isLooping;
- (void)setVolume:(double)volume;


// ******************** 局部刷新  ************************
/// 修改字幕 (旧版字幕）
- (void)resetSubtitles:(BPMixWindow *)window;
- (void)resetSvgSubtitles:(BPMixWindow *)window;
/// 修改字幕 （新版字幕）
- (void)addMixSubtitle:(MgcMixSubtitleView *)subtitle;
- (void)resetMixSubtitle:(MgcMixSubtitleView *)subtitle;
- (void)deleteMixSubtitle:(MgcMixSubtitleView *)subtitle;

/// 修改音量
- (void)resetVolume:(NSDictionary *)volumArray;
/// 添加贴图
- (void)addAttachMediaView:(BPMixMediaView *)mediaView;
- (void)resetAttachMediaView:(BPMixMediaView *)mediaView;
- (void)deleteAttachMediaView:(BPMixMediaView *)mediaView;
/// 添加音频轴
- (void)addAduio:(BPMixAudio *)audio;
- (void)resetAudio:(BPMixAudio *)audio;
- (void)deleteAudio:(BPMixAudio *)audio;
/// 刷新当前帧
- (void)refresh;


// ******************** 全局配置  ************************
// 硬解码、硬编码开关
+ (void)setupMixHWDecode:(bool)decodeOpen
                hwEncode:(bool)encodeOpen;

// 重载应用退出函数：调用mix模块结束函数（释放mix中全局资源）
+ (void)mixMobileFinish;
/// 设置字体资源
+ (void)setOrUpdateFontMap:(NSDictionary *)dict;
// 获取元数据
+ (NSDictionary *)getMediaMetaInfoWithPath:(NSString *)mediaPath;

@end
