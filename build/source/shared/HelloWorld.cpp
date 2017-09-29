#include "HelloWorld.hpp"

namespace Ezored
{

	HelloWorld::HelloWorld()
	{
		std::cout << "HelloWorld::HelloWorld" << std::endl;
	}

	HelloWorld::~HelloWorld()
	{
		std::cout << "HelloWorld::~HelloWorld" << std::endl;
	}

	void HelloWorld::setGreetingMessage(const std::string &message)
	{
		this->message = message;
	}

	std::string HelloWorld::getGreetingMessage()
	{
		return message;
	}

	void HelloWorld::showGreetingMessage()
	{
        std::cout << "Message: " << message << std::endl;
	}

}
