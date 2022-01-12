//
// Created by Caijinglong on 2019-09-06.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

typedef void(^ChangeIds)(NSArray<NSString *> *);

@class PMAssetPathEntity;
@class PMAssetEntity;
@class ResultHandler;

typedef void(^AssetResult)(PMAssetEntity *);

@interface PMManager : NSObject

- (BOOL)isAuth;

+ (void)openSetting;

- (void)setAuth:(BOOL)auth;

- (NSArray<PMAssetPathEntity *> *)getGalleryList:(int)type
                                            date:(NSDate *)date
                                          hasAll:(BOOL)hasAll;

- (NSArray<PMAssetEntity *> *)getAssetEntityListWithGalleryId:(NSString *)identifer
                                                         type:(int)type
                                                         page:(int)page
                                                    pageCount:(int)pageCount
                                                         date:(NSDate *)date;

- (PMAssetEntity *)getAssetEntity:(NSString *)assetId;

- (void)clearCache;

- (void)getThumbWithId:(NSString *)identifer width:(NSUInteger)width
                height:(NSUInteger)height
         resultHandler:(ResultHandler *)handler;

- (void)getFullSizeFileWithId:(NSString *)identifer
                resultHandler:(ResultHandler *)handler;

- (PMAssetPathEntity *)fetchPathProperties:(NSString *)identifer
                                      type:(int)type
                                      date:(NSDate *)date;

- (void)deleteWithIds:(NSArray<NSString *> *)ids
         changedBlock:(ChangeIds)block;

- (NSArray<PMAssetEntity *> *)getAssetEntityListWithRange:(NSString *)identifer
                                                     type:(NSUInteger)type
                                                    start:(NSUInteger)start
                                                      end:(NSUInteger)end
                                                     date:(NSDate *)date;

- (void)saveImage:(NSData *)data
            title:(NSString *)title
             desc:(NSString *)desc
            block:(AssetResult)block;

- (void)saveVideo:(NSString *)path
            title:(NSString *)title
             desc:(NSString *)desc
            block:(AssetResult)block;

- (BOOL)existsWithId:(NSString *) assetId;

@end

