#include "HelloWorldBridgeImpl.hpp"

namespace Ezo {

    std::shared_ptr<HelloWorldBridge> HelloWorldBridge::create() {
        return std::make_shared<HelloWorldBridgeImpl>();
    }

    void HelloWorldBridgeImpl::set_greeting_message(const std::string &message) {
        // this->message = message;
    }

    std::string HelloWorldBridgeImpl::get_greeting_message() {
        return "hello world";
    }

    void HelloWorldBridgeImpl::show_greeting_message() {
        std::cout << "Message: " << "hello world" << std::endl;
    }

}