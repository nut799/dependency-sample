#import "NativeHelloWorldProxy.h"

@interface NativeHelloWorldProxyImpl : NSObject <NativeHelloWorldProxy>

+ (instancetype)proxy;

@end