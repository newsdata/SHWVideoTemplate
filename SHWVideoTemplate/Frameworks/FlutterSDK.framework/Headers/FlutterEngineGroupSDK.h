// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Foundation/Foundation.h>

#import "FlutterEngineSDK.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Represents a collection of FlutterEngineSDKs who share resources which allows
 * them to be created with less time const and occupy less memory than just
 * creating multiple FlutterEngineSDKs.
 *
 * Deleting a FlutterEngineGroupSDK doesn't invalidate existing FlutterEngineSDKs, but
 * it eliminates the possibility to create more FlutterEngineSDKs in that group.
 *
 * @warning This class is a work-in-progress and may change.
 * @see https://github.com/flutter/flutter/issues/72009
 */
FLUTTER_DARWIN_EXPORT
@interface FlutterEngineGroupSDK : NSObject
- (instancetype)init NS_UNAVAILABLE;

/**
 * Initialize a new FlutterEngineGroupSDK.
 *
 * @param name The name that will present in the threads shared across the
 * engines in this group.
 * @param project The `FlutterDartProjectSDK` that all FlutterEngineSDKs in this group
 * will be executing.
 */
- (instancetype)initWithName:(NSString*)name
                     project:(nullable FlutterDartProjectSDK*)project NS_DESIGNATED_INITIALIZER;

/**
 * Creates a running `FlutterEngineSDK` that shares components with this group.
 *
 * @see FlutterEngineGroupSDK
 */
- (FlutterEngineSDK*)makeEngineWithEntrypoint:(nullable NSString*)entrypoint
                                libraryURI:(nullable NSString*)libraryURI;
@end

NS_ASSUME_NONNULL_END
