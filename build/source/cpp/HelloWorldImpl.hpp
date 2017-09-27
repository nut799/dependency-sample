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
	void set_proxy(const std::shared_ptr<HelloWorldProxy> & proxy) override;
	std::shared_ptr<HelloWorldProxy> get_proxy() override;

	void set_greeting_message(const std::string & message) override;
	std::string get_greeting_message() override;
	void show_greeting_message() override;
	void show_greeting_message_alert() override;

private:
	std::shared_ptr<HelloWorldProxy> proxy;
};
}