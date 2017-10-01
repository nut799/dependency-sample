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
bridge?.showGreetingMessageAlert()
```

### How to use it with Android?

```java
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;

import com.ezored.sample.HelloWorldBridge;
import com.ezored.sample.HelloWorldProxyImpl;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("Ezored");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        HelloWorldProxyImpl proxy = new HelloWorldProxyImpl(this);

        HelloWorldBridge bridge = HelloWorldBridge.create();
        bridge.setGreetingMessage("Hello World");
        bridge.showGreetingMessage();
        bridge.setProxy(proxy);

		// if you want show a native alert test from proxy
        bridge.showGreetingMessageAlert();
    }

}
```