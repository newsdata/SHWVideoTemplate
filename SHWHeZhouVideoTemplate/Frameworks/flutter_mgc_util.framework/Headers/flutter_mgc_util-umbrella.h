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

#import "FlutterMgcUtilPlugin.h"
#import "MgcFlutterCommonUtil.h"
#import "BPPhoneMonitor.h"
#import "MgcAlbumUtil.h"
#import "MgcCalendarHelper.h"
#import "MgcDDLogger.h"
#import "MgcUtilOpenUrl.h"

FOUNDATION_EXPORT double flutter_mgc_utilVersionNumber;
FOUNDATION_EXPORT const unsigned char flutter_mgc_utilVersionString[];

