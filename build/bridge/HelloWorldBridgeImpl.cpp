#include "HelloWorldBridgeImpl.hpp"

namespace Ezored {

    std::shared_ptr<HelloWorldBridge> HelloWorldBridge::create() {
		std::shared_ptr<HelloWorld> helloWorld = std::make_shared<HelloWorld>();
		std::shared_ptr<HelloWorldBridgeImpl> bridge = std::make_shared<HelloWorldBridgeImpl>();
		bridge->setHelloWorld(helloWorld);
		return bridge;
    }

    void HelloWorldBridgeImpl::set_greeting_message(const std::string &message) {
        helloWorld->setGreetingMessage(message);
    }

    std::string HelloWorldBridgeImpl::get_greeting_message() {
		return helloWorld->getGreetingMessage();
    }

    void HelloWorldBridgeImpl::show_greeting_message() {
		helloWorld->showGreetingMessage();
    }
    
    void HelloWorldBridgeImpl::setHelloWorld(std::shared_ptr<HelloWorld> helloWorld) {
        this->helloWorld = helloWorld;
    }

}