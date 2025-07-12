//
//  SHWDownloaderEventSink.h
//  oss_flutter
//
//  Created by Ray on 2020/5/1.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterPluginSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface SHWDownloaderEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
