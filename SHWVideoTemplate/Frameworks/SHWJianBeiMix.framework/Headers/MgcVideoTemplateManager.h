//
//  MgcVideoTemplateManager.h
//  SHWJianBeiMix
//
//  Created by ShiChangShun on 2022/1/11.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterSDK.h>

//NS_ASSUME_NONNULL_BEGIN

///合成成功回调
typedef void(^SyntheticResultBlock)(NSDictionary *result);

///合成错误回调
typedef void(^SyntheticResultErrorBlock)(NSString *error);

///用户信息校验失败
typedef void(^MgcUserTokenError)(NSString *error);

@interface MgcVideoTemplateManager : NSObject

///合成成功回调
///result @{@"syntheticResultPath" : xxx ,@"title": xxx }
@property (nonatomic,copy) SyntheticResultBlock resultBlock;
///合成失败回调
@property (nonatomic,copy) SyntheticResultErrorBlock errorBlock;

///token 校验失败回调
@property (nonatomic,copy) MgcUserTokenError tokenErrorBlock;

@property (nonatomic,strong) FlutterMethodChannel *channel;

@property (nonatomic,strong) NSString *cookContent;
@property (nonatomic,strong) NSString *syntheticFolderPath;

///设置用户eventId和cook
- (BOOL)setToken:(NSString *)token AndEventId:(NSString *)eventId;

///设置合成视频路径
-(void)setSyntheticPath:(NSString*)folderPath;

///设置合成结果回调 (也可通过属性直接赋值)
- (void)addSyntheticResultListener:(SyntheticResultBlock)block;


/// 获取相对路径 (去掉 NSHomeDirectory() 之后的相对路径)
/// @param localPath 带 NSHomeDirectory() 的全路径
- (NSString *)getRelativePathWithLocalPath:(NSString *)localPath;

///获取该plugin的实例  必须注册该plugin 后调用
+ (instancetype)sharedManager;

@end

//NS_ASSUME_NONNULL_END
