//
//  SHWOssClient.h
//  Runner
//
//  Created by yehot on 2019/12/2.
//  Copyright © 2019 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlutterSDK/FlutterSDK.h>
#import "BPOssModel.h"

/**
   OSS 文档
- https://help.aliyun.com/document_detail/94408.html?spm=a2c4g.11186623.2.13.783c44eb9MaSnz
*/
@interface SHWOssClient : NSObject <FlutterStreamHandler>

@property(nonatomic, strong) FlutterEventChannel* eventChannel;

// taskId 是 Flutter 端的 OssClient.id 
@property (nonatomic, copy, readonly) NSString *taskId;


- (instancetype)initWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar
                           config:(BPOssModel *)config
                           taskId:(NSString *)taskId;

/// 普通上传
/// - filePath: 本地文件路径
/// - ossFileName: 指定放在 oss 上的文件名；
/// - fileId 用于区分下载任务
- (void)uploadFile:(NSString *)filePath
       ossFileName:(NSString *)ossFileName
            fileId:(NSString *)fileId;

// 断点续传上传
- (void)resumableUploadFile:(NSString *)filePath
                ossFileName:(NSString *)ossFileName
                     fileId:(NSString *)fileId;

- (void)cancelWithFileId:(NSString *)fileId;

- (void)cancelAll;

@end

