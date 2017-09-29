#pragma once

#include <string>
#include <iostream>
#include <hello_world_bridge.hpp>
#include <hello_world_proxy.hpp>
#include <HelloWorld.hpp>

namespace Ezored
{
class HelloWorldBridgeImpl : public HelloWorldBridge
{
public:	
	HelloWorldBridgeImpl();

	static std::shared_ptr<HelloWorldBridge> create();
	void setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) override;
	std::shared_ptr<HelloWorldProxy> getProxy() override;

	void setGreetingMessage(const std::string & message) override;
	std::string getGreetingMessage() override;
	void showGreetingMessage() override;
	void showGreetingMessageAlert() override;
	void setShared(const std::shared_ptr<HelloWorld> & shared);

private:
	std::shared_ptr<HelloWorldProxy> proxy;
	std::shared_ptr<HelloWorld> shared;
};
}