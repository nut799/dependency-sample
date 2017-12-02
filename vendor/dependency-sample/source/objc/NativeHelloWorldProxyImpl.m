#import "NativeHelloWorldProxyImpl.h"
#import <UIKit/UIKit.h>

@interface NativeHelloWorldProxyImpl ()

@end

@implementation NativeHelloWorldProxyImpl

//------------------------------------------------------------------------------
#pragma mark - Class Initializer
//------------------------------------------------------------------------------

+ (instancetype)proxy {
    return [[self alloc] init];
}

//------------------------------------------------------------------------------
#pragma mark - Initialization
//------------------------------------------------------------------------------

- (instancetype)init {
    self = [super init];

    if (self) {
        //
    }

    return self;
}

//------------------------------------------------------------------------------
#pragma mark - NativeHelloWorldProxyImpl
//------------------------------------------------------------------------------

- (void)showGreetingMessageAlert {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"Title" message:@"Message from proxy Obj-C code" preferredStyle:UIAlertControllerStyleAlert];

	UIAlertAction *button = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
		// handle action if need
	}];

	[alert addAction:button];
	
	UIViewController *controller = [UIApplication sharedApplication].keyWindow.rootViewController;
    [controller presentViewController:alert animated:YES completion:nil];
}

@end