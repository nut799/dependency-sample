#ifndef HELLO_WORLD_BRIDGE_IMPL_H
#define HELLO_WORLD_BRIDGE_IMPL_H

#include <string>
#include <iostream>
#include <hello_world_bridge.hpp>
#include <HelloWorld.hpp>

namespace Ezored
{
class HelloWorldBridgeImpl : public HelloWorldBridge
{
public:	
    void set_greeting_message(const std::string & message);
    std::string get_greeting_message();
	void show_greeting_message();
	void setHelloWorld(std::shared_ptr<HelloWorld> helloWorld)
private:
	std::shared_ptr<HelloWorld> helloWorld;
};
}

#endif // HELLO_WORLD_BRIDGE_IMPL_H