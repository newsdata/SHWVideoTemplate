//
//  MgcVideoRenderableImp.h
//  Runner
//
//  Created by yehot on 2019/12/6.
//  Copyright © 2019 The Chromium Authors. All rights reserved.
//

#ifndef MgcVideoRenderableImp_hpp
#define MgcVideoRenderableImp_hpp

#include "mobile_player_controller.h"   // mix code
#import "BPRenderable.h"

/**
    flutter 项目中，video render data -> texture 后 不需要显示到 GLView 上，只需要将 texture 交给 flutter
 */
namespace ios {

/// render mix 传入的视频帧
/// MgcVideoRenderableImp 只是用 C++ 包装了 BPMovieGLView 给 mix 调用
class MgcVideoRenderableImp : public mobile::MobileVideoRenderable {
public:
    MgcVideoRenderableImp();
    ~MgcVideoRenderableImp();
    
    void SetRenderableInstance(NSObject<BPVideoRenderable> *videoRender);
    
    // override mobile::MobileVideoRenderable
    void renderVideo(mobile::VideoFrame* frame) override;
    void onPlay() override;
    void onPause() override;
    void onStop() override;

private:
    // C++ 中，只持有 OC 类的指针，不负责创建和销毁
    NSObject<BPVideoRenderable>* _videoRender;
};

}  // namespace ios

#endif /* MgcVideoRenderableImp_hpp */
