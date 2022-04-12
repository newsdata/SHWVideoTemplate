//
//  MgcAlbumUtil.h
//  Runner
//
//  Created by yehot on 2019/12/18.
//  Copyright © 2019 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^AlbumSuccessBlock)(BOOL succeed, NSString *error);

@interface MgcAlbumUtil : NSObject

/// 保存图片或视频到相册
/// @param filePath 文件路径
/// @param type 文件 类型 ：video   ,  image
/// @param block 保存回调
+ (void)saveVideoToAlbum:(NSString *)filePath WithType:(NSString *)type comlete:(AlbumSuccessBlock)block;

+ (void)saveImageToAlbum:(NSString *)filePath albumName:(NSString *)albumName comlete:(AlbumSuccessBlock)block;


@end
