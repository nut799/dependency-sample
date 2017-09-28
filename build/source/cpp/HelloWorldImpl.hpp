#pragma once

#include <string>
#include <iostream>
#include <hello_world.hpp>

namespace Ezored
{
class HelloWorldImpl : public HelloWorld
{
public:	
	HelloWorldImpl();

	static std::shared_ptr<HelloWorld> create();
	void setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) override;
	std::shared_ptr<HelloWorldProxy> getProxy() override;

	void setGreetingMessage(const std::string & message) override;
	std::string getGreetingMessage() override;
	void showGreetingMessage() override;
	void showGreetingMessageAlert() override;

private:
	std::shared_ptr<HelloWorldProxy> proxy;
};
}