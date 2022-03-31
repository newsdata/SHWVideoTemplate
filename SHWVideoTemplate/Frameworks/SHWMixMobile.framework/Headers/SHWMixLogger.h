//
//  SHWMixLogger.h
//  CocoaLumberjack
//
//  Created by yehot on 2019/12/4.
//

#import <Foundation/Foundation.h>

//#ifdef MIX_IOS
//#if __has_include("MixLogImp.h")
//    #define MixLog(...) [MixLogImp log:@"mix: ", ##__VA_ARGS__, nil];
//#else
    #define MixLog(fmt, ...)
//#endif
