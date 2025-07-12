//
//  SHWDownloader.h
//  oss_flutter
//
//  Created by Ray on 2020/5/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SHWDownloader : NSObject

+ (SHWDownloader *)sharedInstance;

- (BOOL)startDownloadWithRemoteUrl:(NSString *)remoteUrl
                            toPath:(NSString *)fPath
                          progress:(void (^)(double progress))progressBlock
                          complete:(void (^)(BOOL success, NSString *msg))completeBlock;

- (void)cancelWithUrl:(NSString *)remoteUrl;

- (void)cancelAll;

@end

NS_ASSUME_NONNULL_END
