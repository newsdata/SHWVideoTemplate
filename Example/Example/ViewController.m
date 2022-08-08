//
//  ViewController.m
//  Example
//
//  Created by ShiChangShun on 2021/11/8.
//

#import "ViewController.h"
#import <AVFoundation/AVFoundation.h>

#import <FlutterSDK/FlutterSDK.h>
#import "RMGeneratedPluginRegistrant.h"
#import <SHWJianBeiMix/SHWJianBeiMix.h>

@interface ViewController ()<UITextFieldDelegate>

@property (nonatomic,strong) FlutterEngineSDK *engine;

@property (nonatomic,strong) NSString *token;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
    button.frame = CGRectMake(50, 300, 80, 35);
    [button setTitle:@"跳转视频模板" forState:UIControlStateNormal];
    [self.view addSubview:button];
    [button addTarget:self action:@selector(tapButton:) forControlEvents:UIControlEventTouchUpInside];
    [button sizeToFit];
    
    UITextField *tokenField = [[UITextField alloc]initWithFrame:CGRectMake(50, 180, [UIScreen mainScreen].bounds.size.width-100, 44)];
    tokenField.tag = 10;
    tokenField.borderStyle = UITextBorderStyleRoundedRect;
    tokenField.placeholder = @"请输入token";
    tokenField.delegate = self;
    [self.view addSubview:tokenField];
    
    MgcVideoTemplateManager *instance = [MgcVideoTemplateManager sharedManager];
#pragma mark --- 填写 自己的 token---------
    [instance setToken: @""];
    
    instance.resultBlock = ^(NSDictionary * result) {
        NSString *resultPath = result[@"syntheticResultPath"];
        NSString *title = result[@"title"];
        NSLog(@"合成路径：%@,文件title:%@",resultPath,title);
        
        if ([[NSFileManager defaultManager] fileExistsAtPath:resultPath]) {
            NSInteger fileSize = [[[NSFileManager defaultManager] attributesOfItemAtPath:resultPath error:nil] fileSize];
            AVURLAsset *asset = [AVURLAsset assetWithURL:[NSURL fileURLWithPath:resultPath]];
            NSLog(@"fileSize:%ld, duration:%f",fileSize,ceil(asset.duration.value/asset.duration.timescale));
        }
    };
    instance.errorBlock = ^(NSString * _Nonnull error) {
        NSLog(@"合成错误：%@",error);
    };
    instance.tokenErrorBlock = ^(NSString * _Nonnull error) {
        NSLog(@"error 信息：%@",error);
        if (![error isEqualToString:@"closePage"]) {
            [self.engine.viewController dismissViewControllerAnimated:NO completion:^{
                //释放 engine 调用下方代码
                dispatch_async(dispatch_get_main_queue(), ^{
                    [self.engine destroyContext];
                    self.engine = nil;
                });
            }];
        }
    };
    
}

- (IBAction)tap:(id)sender {
    
}


- (void)tapButton:(UIButton *)button {
    
    if (!self.engine) {
        self.engine = [[FlutterEngineSDK alloc]initWithName:@"io.flutter.rongmei"];
        [self.engine run];
        
        [RMGeneratedPluginRegistrant registerWithRegistry:self.engine];
        [MgcPluginRegistrant registerWithRegistry:self.engine];
    }
    
    FlutterViewControllerSDK *vc = [[FlutterViewControllerSDK alloc]initWithEngine:self.engine nibName:nil bundle:nil];
    vc.modalPresentationStyle = UIModalPresentationFullScreen;
    vc = self.engine.viewController;
    
    [self presentViewController:vc animated:NO completion:nil];

}


- (void)textFieldDidEndEditing:(UITextField *)textField {
    self.token = textField.text;
}

-(BOOL)textFieldShouldReturn:(UITextField *)textField{
    [textField resignFirstResponder];
    return true;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES];
    [[MgcVideoTemplateManager sharedManager] deleteDrafts];
    
}

@end
