#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BPMixAudio.h"
#import "BPMixMediaSource.h"
#import "BPMixMediaView.h"
#import "BPMixRotation.h"
#import "BPMixView.h"
#import "BPMixWindow.h"
#import "BPVideoMaskTypeDefine.h"
#import "BPMixWindow+Adjust.h"
#import "NSMutableArray+BPSafe.h"
#import "BPMixColorView.h"
#import "BPMixGifView.h"
#import "BPMixImageView.h"
#import "BPMixSvgView.h"
#import "BPMixVideoView.h"
#import "BPMixViewGroup.h"
#import "MgcMixSubtitle.h"
#import "MgcMixSubtitleAnimate.h"
#import "MgcMixSubtitleFont.h"
#import "MgcMixSubtitleShadow.h"
#import "MgcMixSubtitleStroke.h"
#import "MgcMixSubtitleStyle.h"
#import "MgcMixSubtitleView.h"
#import "MgcMixSubtitleWordLayout.h"
#import "BPMixFont.h"
#import "BPMixFontShadow.h"
#import "BPMixSubtitleView.h"
#import "BPMixConfig.h"
#import "BPMixCrop.h"
#import "BPMixFilter.h"
#import "BPMixFilterDefine.h"
#import "BPMixLayout.h"
#import "BPMixTransitionView.h"
#import "BPFileUtil.h"
#import "BPLogger.h"
#import "BPVideoFileHandler.h"
#import "SHWMixLogger.h"

FOUNDATION_EXPORT double SHWMixMobileVersionNumber;
FOUNDATION_EXPORT const unsigned char SHWMixMobileVersionString[];

