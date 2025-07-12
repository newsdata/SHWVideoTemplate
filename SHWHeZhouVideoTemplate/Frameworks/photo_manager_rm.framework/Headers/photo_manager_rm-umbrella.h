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

#import "PMCacheContainer.h"
#import "PMManager.h"
#import "PMNotificationManager.h"
#import "ResultHandler.h"
#import "PMAssetEntity.h"
#import "PMAssetEventSink.h"
#import "PMAssetPathEntity.h"
#import "BPPhotoAssetItem.h"
#import "BPPhotoItemStoreService.h"
#import "RMImageScannerPlugin.h"
#import "BPPhotoAssetUtil.h"
#import "ConvertUtils.h"
#import "NSTimer+PMBlocksKit.h"
#import "PHAsset+PHAsset_checkType.h"
#import "PMLogUtils.h"
#import "PMPathUtil.h"
#import "PMTranscoder.h"

FOUNDATION_EXPORT double photo_manager_rmVersionNumber;
FOUNDATION_EXPORT const unsigned char photo_manager_rmVersionString[];

