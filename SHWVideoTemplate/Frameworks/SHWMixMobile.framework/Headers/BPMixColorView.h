//
//  BPMixColorView.h
//  SHWMixMobile
//
//  Created by Ray on 2020/5/2.
//

#import "BPMixMediaView.h"

NS_ASSUME_NONNULL_BEGIN

@interface BPMixColorView : BPMixMediaView <NSCopying>

// color 源文件
@property (nonatomic, copy) NSString *sourceContent;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
