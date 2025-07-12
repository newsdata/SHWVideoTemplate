//
// Created by Caijinglong on 2019-09-06.
//

#import <Foundation/Foundation.h>

@class PHAsset;

/// 相册 model
@interface PMAssetPathEntity : NSObject

@property(nonatomic, copy) NSString *id;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, assign) int assetCount;
@property(nonatomic, assign) BOOL isAll;

- (instancetype)initWithId:(NSString *)identifer name:(NSString *)name assetCount:(int)assetCount;

+ (instancetype)entityWithId:(NSString *)identifer name:(NSString *)name assetCount:(int)assetCount;


@end
