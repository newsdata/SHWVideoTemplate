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

+ (void)saveVideoToAlbum:(NSString *)filePath comlete:(AlbumSuccessBlock)block;

@end
