//
//  PMAssetEventSink.h
//  photo_manager
//
//  Created by Ray on 2020/4/22.
//

#import <Foundation/Foundation.h>
#import <Flutter/FlutterPlugin.h>

NS_ASSUME_NONNULL_BEGIN

@interface PMAssetEventSink : NSObject <FlutterStreamHandler>

- (void)sendEvent:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
