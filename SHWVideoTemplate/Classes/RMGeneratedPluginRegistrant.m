//
//  Generated file. Do not edit.
//

// clang-format off

#import "RMGeneratedPluginRegistrant.h"

#if __has_include(<audioplayers_rm/RMAudioplayersPlugin.h>)
#import <audioplayers_rm/RMAudioplayersPlugin.h>
#else
@import audioplayers_rm;
#endif

#if __has_include(<connectivity_rm/RMFLTConnectivityPlugin.h>)
#import <connectivity_rm/RMFLTConnectivityPlugin.h>
#else
@import connectivity_rm;
#endif

#if __has_include(<device_info_rm/RMFLTDeviceInfoPlugin.h>)
#import <device_info_rm/RMFLTDeviceInfoPlugin.h>
#else
@import device_info_rm;
#endif

#if __has_include(<flutter_image_compress_rm/FlutterImageCompressPlugin.h>)
#import <flutter_image_compress_rm/FlutterImageCompressPlugin.h>
#else
@import flutter_image_compress_rm;
#endif

#if __has_include(<flutter_mgc_util/FlutterMgcUtilPlugin.h>)
#import <flutter_mgc_util/FlutterMgcUtilPlugin.h>
#else
@import flutter_mgc_util;
#endif

#if __has_include(<flutter_mix_player/MixVideoPlayerPlugin.h>)
#import <flutter_mix_player/MixVideoPlayerPlugin.h>
#else
@import flutter_mix_player;
#endif

#if __has_include(<flutter_statusbarcolor/FlutterStatusbarcolorPlugin.h>)
#import <flutter_statusbarcolor/FlutterStatusbarcolorPlugin.h>
#else
@import flutter_statusbarcolor;
#endif

#if __has_include(<oss_flutter/OssFlutterPlugin.h>)
#import <oss_flutter/OssFlutterPlugin.h>
#else
@import oss_flutter;
#endif

#if __has_include(<package_info_rm/RMFLTPackageInfoPlugin.h>)
#import <package_info_rm/RMFLTPackageInfoPlugin.h>
#else
@import package_info_rm;
#endif

#if __has_include(<path_provider_rm/RMFLTPathProviderPlugin.h>)
#import <path_provider_rm/RMFLTPathProviderPlugin.h>
#else
@import path_provider_rm;
#endif

#if __has_include(<permission_handler_rm/RMPermissionHandlerPlugin.h>)
#import <permission_handler_rm/RMPermissionHandlerPlugin.h>
#else
@import permission_handler_rm;
#endif

#if __has_include(<photo_manager_rm/RMImageScannerPlugin.h>)
#import <photo_manager_rm/RMImageScannerPlugin.h>
#else
@import photo_manager_rm;
#endif

#if __has_include(<shared_preferences_rm/RMFLTSharedPreferencesPlugin.h>)
#import <shared_preferences_rm/RMFLTSharedPreferencesPlugin.h>
#else
@import shared_preferences_rm;
#endif

#if __has_include(<sqflite_rm/RMSqflitePlugin.h>)
#import <sqflite_rm/RMSqflitePlugin.h>
#else
@import sqflite_rm;
#endif

#if __has_include(<url_launcher_ios_rm/RMFLTURLLauncherPlugin.h>)
#import <url_launcher_ios_rm/RMFLTURLLauncherPlugin.h>
#else
@import url_launcher_ios_rm;
#endif

#if __has_include(<video_player_rm/RMFLTVideoPlayerPlugin.h>)
#import <video_player_rm/RMFLTVideoPlayerPlugin.h>
#else
@import video_player_rm;
#endif

#if __has_include(<video_thumbnail_rm/RMVideoThumbnailPlugin.h>)
#import <video_thumbnail_rm/RMVideoThumbnailPlugin.h>
#else
@import video_thumbnail_rm;
#endif

#if __has_include(<webview_flutter_rm/RMFLTWebViewFlutterPlugin.h>)
#import <webview_flutter_rm/RMFLTWebViewFlutterPlugin.h>
#else
@import webview_flutter_rm;
#endif

@implementation RMGeneratedPluginRegistrant

+ (void)registerWithRegistry:(NSObject<FlutterPluginRegistrySDK>*)registry {
  [RMAudioplayersPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMAudioplayersPlugin"]];
  [RMFLTConnectivityPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTConnectivityPlugin"]];
  [RMFLTDeviceInfoPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTDeviceInfoPlugin"]];
  [FlutterImageCompressPlugin registerWithRegistrar:[registry registrarForPlugin:@"FlutterImageCompressPlugin"]];
  [FlutterMgcUtilPlugin registerWithRegistrar:[registry registrarForPlugin:@"FlutterMgcUtilPlugin"]];
  [MixVideoPlayerPlugin registerWithRegistrar:[registry registrarForPlugin:@"MixVideoPlayerPlugin"]];
  [FlutterStatusbarcolorPlugin registerWithRegistrar:[registry registrarForPlugin:@"FlutterStatusbarcolorPlugin"]];
  [OssFlutterPlugin registerWithRegistrar:[registry registrarForPlugin:@"OssFlutterPlugin"]];
  [RMFLTPackageInfoPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTPackageInfoPlugin"]];
  [RMFLTPathProviderPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTPathProviderPlugin"]];
  [RMPermissionHandlerPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMPermissionHandlerPlugin"]];
  [RMImageScannerPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMImageScannerPlugin"]];
  [RMFLTSharedPreferencesPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTSharedPreferencesPlugin"]];
  [RMSqflitePlugin registerWithRegistrar:[registry registrarForPlugin:@"RMSqflitePlugin"]];
  [RMFLTURLLauncherPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTURLLauncherPlugin"]];
  [RMFLTVideoPlayerPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTVideoPlayerPlugin"]];
  [RMVideoThumbnailPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMVideoThumbnailPlugin"]];
  [RMFLTWebViewFlutterPlugin registerWithRegistrar:[registry registrarForPlugin:@"RMFLTWebViewFlutterPlugin"]];
}

@end
