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

#import "RMSqfliteOperation.h"
#import "RMSqflitePlugin.h"

FOUNDATION_EXPORT double sqflite_rmVersionNumber;
FOUNDATION_EXPORT const unsigned char sqflite_rmVersionString[];

