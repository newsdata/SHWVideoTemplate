//
//  BPOssModel.h
//  AFNetworking
//
//  Created by yehot on 2020/6/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 服务端会返回 oss 目录 path，需要再拼接上文件名
 
 String ossDirFullPath() {
   if (uploadPath == null) {
     return "https://$bucketName.$endPoint/";
   }
   return "https://$bucketName.$endPoint/$uploadPath";
 }
 */
@interface BPOssModel : NSObject

/// key 和 token 有效期 60分钟？？ 有效期内可以反复使用
@property (nonatomic, copy) NSString *accessKeyId;
@property (nonatomic, copy) NSString *accessKeySecret;
@property (nonatomic, copy) NSString *securityToken;

@property (nonatomic, copy) NSString *expiration;

// magic-upload-hz
@property (nonatomic, copy) NSString *bucketName;

// oss-cn-hangzhou.aliyuncs.com
@property (nonatomic, copy) NSString *endPoint;

// 此字段可能为空！
// 2020/0601/qFGchieTwqC7Huvm/
// 正常此字段赋值给 oss request.objectKey 可以是 filePath，目前的写法，需要再赋值 objectKey 时，再拼接上指定的 ossFileName
@property (nonatomic, copy) NSString *uploadDir;

@property (nonatomic, assign) BOOL useAKSK;


- (instancetype)initWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
