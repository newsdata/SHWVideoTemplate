//
//  MgcUtilOpenUrl.h
//  BSBacktraceLogger
//
//  Created by yehot on 2020/3/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MgcUtilOpenUrl : NSObject

+ (void)openUrl:(NSString *)urlStr
       callback:(void (^ __nullable)(BOOL success))callback;

@end

NS_ASSUME_NONNULL_END
