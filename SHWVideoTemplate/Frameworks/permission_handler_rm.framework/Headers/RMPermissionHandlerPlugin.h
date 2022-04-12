#import <FlutterSDK/FlutterSDK.h>
#import "PermissionManager.h"

@interface RMPermissionHandlerPlugin : NSObject<FlutterPluginSDK>
- (instancetype)initWithPermissionManager:(PermissionManager *)permissionManager;
@end
