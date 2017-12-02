// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proj.djinni

#pragma once

#include <memory>
#include <string>

namespace Ezored { namespace Sample {

class HelloWorldProxy;

/** Native HelloWorldBridge Class */
class HelloWorldBridge {
public:
    virtual ~HelloWorldBridge() {}

    static std::shared_ptr<HelloWorldBridge> create();

    virtual void setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) = 0;

    virtual std::shared_ptr<HelloWorldProxy> getProxy() = 0;

    virtual void setGreetingMessage(const std::string & message) = 0;

    virtual std::string getGreetingMessage() = 0;

    virtual void showGreetingMessage() = 0;

    virtual void showGreetingMessageAlert() = 0;
};

} }  // namespace Ezored::Sample