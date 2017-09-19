#include "HelloWorldBridgeImpl.hpp"

namespace Ezored {

    std::shared_ptr<HelloWorldBridge> HelloWorldBridge::create() {
		std::shared_ptr<HelloWorld> helloWorld = std::make_shared<HelloWorld>();
		std::shared_ptr<HelloWorldBridgeImpl> bridge = std::make_shared<HelloWorldBridgeImpl>();
		*bridge->setHelloWorld(helloWorld);
    }

    void HelloWorldBridgeImpl::set_greeting_message(const std::string &message) {
        // this->message = message;
    }

    std::string HelloWorldBridgeImpl::get_greeting_message() {
        return "Hello world";
    }

    void HelloWorldBridgeImpl::show_greeting_message() {
        std::cout << "Message: " << "Hello world" << std::endl;
    }

}