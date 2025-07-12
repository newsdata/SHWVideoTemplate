#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
    #import <FlutterSDK/FlutterSDK.h>
#else
    #import <FlutterMacOS/FlutterMacOS.h>
#endif

@interface RMAudioplayersPlugin : NSObject<FlutterPluginSDK>
@end
