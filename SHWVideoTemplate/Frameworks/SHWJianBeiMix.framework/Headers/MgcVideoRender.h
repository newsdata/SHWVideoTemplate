//
//  MgcVideoRender.h
//  Runner
//
//  Created by yehot on 2019/12/10.
//  Copyright © 2019 The Chromium Authors. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BPRenderable.h"
#import "MGCPixelBufferDelegate.h"

/**
   - input: rgba data
   - output: CVPixelBufferRef
*/
@interface MgcVideoRender : NSObject <BPVideoRenderable>

@property (nonatomic, weak) id<MGCPixelBufferDelegate> presentDelegate;

- (instancetype)initWithSize:(CGSize)size;

@end
