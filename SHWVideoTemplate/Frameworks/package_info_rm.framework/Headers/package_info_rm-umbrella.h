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

#import "RMFLTPackageInfoPlugin.h"

FOUNDATION_EXPORT double package_info_rmVersionNumber;
FOUNDATION_EXPORT const unsigned char package_info_rmVersionString[];

