//
//  AppDelegate.m
//  Flutterframework
//
//  Created by ShiChangShun on 2021/11/9.
//

#import "AppDelegate.h"
#import <SHWJianBeiMix/SHWJianBeiMix.h>
#import "GeneratedPluginRegistrant.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [MgcAppDelegateSDK mgc_setupSDK];
    
//    MgcVideoTemplateManager *instance = [MgcVideoTemplateManager sharedManager];
//    instance.resultBlock = ^(NSString * _Nonnull resultPath) {
//        NSLog(@"合成路径：%@",resultPath);
//    };
//    instance.errorBlock = ^(NSString * _Nonnull error) {
//        NSLog(@"合成错误：%@",error);
//    };
//    instance.tokenErrorBlock = ^(NSString * _Nonnull error) {
//        NSLog(@"token 验证失败：%@",error);
//        [self.flutterEngine.viewController dismissViewControllerAnimated:NO completion:^{
//            dispatch_async(dispatch_get_main_queue(), ^{
//                [self.flutterEngine destroyContext];
//            });
//        }];
//    };
    
    
    
    return YES;
}



@end
