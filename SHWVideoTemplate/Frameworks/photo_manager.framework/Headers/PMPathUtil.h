//
//  PMPathUtil.h
//  photo_manager
//
//  Created by yehot on 2020/3/9.
//

#import <Foundation/Foundation.h>

extern NSString *const kMediaDir;

@interface PMPathUtil : NSObject


+ (NSString *)sandboxDocumentsPath;

/// 转码后，图片 将要保存的路径
+ (NSString *)imageTargetPathWithPHAssetId:(NSString *)localIdentifier;
/// 转码后，视频 将要保存的路径
+ (NSString *)videoTargetPathWithPHAssetId:(NSString *)localIdentifier;

+ (NSString *)mediaDirPath;

+ (BOOL)isFileExistsAtPath:(NSString *)fileFullPath;

+ (NSString *)urlencode:(NSString *)string;



@end
