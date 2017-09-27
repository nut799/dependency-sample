#import "EzoredHelloWorldProxyImpl.h"
#import <UIKit/UIKit.h>

@interface EzoredHelloWorldProxyImpl ()

@end

@implementation EzoredHelloWorldProxyImpl

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
#pragma mark - EzoredHelloWorldProxyImpl
//------------------------------------------------------------------------------

- (void)showGreetingMessageAlert {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"Title" message:@"Message from native Obj-C" preferredStyle:UIAlertControllerStyleAlert];

	UIAlertAction *button = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
		// handle action
	}];

	[alert addAction:button];
	
	[self presentViewController:alert animated:YES completion:nil];
}

@end