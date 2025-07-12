//
//  MgcDDLogger.h
//  CocoaLumberjack
//
//  Created by yehot on 2020/1/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** (暂时已废弃)
    flutter 端调用 method channel 打印 dart 的 print 到 DDLog
 
    DDLog 的初始化，需要在 主工程中自定配置
 */
@interface MgcDDLogger : NSObject

+ (void)log:(NSString *)msg level:(NSString *)levle;

+ (void)logError:(NSString *)msg;
+ (void)logWarn:(NSString *)msg;
+ (void)logInfo:(NSString *)msg;
+ (void)logDebug:(NSString *)msg;
+ (void)logVerbose:(NSString *)msg;


@end

NS_ASSUME_NONNULL_END
