#ifndef HELLO_WORLD_IMPL_H
#define HELLO_WORLD_IMPL_H

#include <string>
#include <iostream>
#include <hello_world.hpp>

namespace Ezored
{
class HelloWorldImpl : public HelloWorld
{
public:	
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

#endif // HELLO_WORLD_BRIDGE_IMPL_H