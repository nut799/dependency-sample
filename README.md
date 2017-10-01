# Ezored::Sample::HelloWorld

This is a simple `Hello World` example to test bridge and proxy code generation.  

### How to use it?

```c++
#include <ezored/sample/HelloWorld.hpp>

auto helloWorld = std::make_shared<Ezored::Sample::HelloWorld>();
helloWorld->setGreetingMessage("Hello World");
helloWorld->showGreetingMessage();

std::cout << helloWorld->getGreetingMessage() << std::endl;
```

### How to use it with Swift?

Add the following lines to your bridge header file in Swift project:

```c++
#import <Ezored/NativeHelloWorldBridge.h>
#import <Ezored/NativeHelloWorldProxyImpl.h>
```

And in your swift class:

```swift
let bridge = NativeHelloWorldBridge.create()
let proxy = NativeHelloWorldProxyImpl.proxy()

bridge?.setProxy(proxy)
bridge?.setGreetingMessage("Teste")
bridge?.showGreetingMessage()

// if you want show a native alert test from proxy
DispatchQueue.main.async {
	bridge?.showGreetingMessageAlert()
}
```

### How to use it with Android?

