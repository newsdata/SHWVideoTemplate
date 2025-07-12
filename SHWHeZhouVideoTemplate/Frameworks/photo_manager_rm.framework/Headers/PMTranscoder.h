//
//  PMTranscoder.h
//  photo_manager
//
//  Created by yehot on 2020/3/26.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterSDK.h>
#import "PMAssetEntity.h"

typedef void(^TranscoderResult)(NSArray<PMAssetEntity *> *dataArray);

@interface PMTranscoder : NSObject <FlutterStreamHandler>

@property(nonatomic, strong) FlutterEventChannel* eventChannel;


- (instancetype)initWithLimitResolution:(int)limitResolution;

- (void)startAsyncTranscodeWithData:(NSArray<PMAssetEntity *> *)array
                              result:(TranscoderResult)result;


@end

