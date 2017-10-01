#include "HelloWorld.hpp"

Ezored::Sample::HelloWorld::HelloWorld()
{
	std::cout << "HelloWorld::HelloWorld" << std::endl;
}

Ezored::Sample::HelloWorld::~HelloWorld()
{
	std::cout << "HelloWorld::~HelloWorld" << std::endl;
}

void Ezored::Sample::HelloWorld::setGreetingMessage(const std::string &message)
{
	this->message = message;
}

std::string Ezored::Sample::HelloWorld::getGreetingMessage()
{
	return message;
}

void Ezored::Sample::HelloWorld::showGreetingMessage()
{
	std::cout << "Message: " << message << std::endl;
}