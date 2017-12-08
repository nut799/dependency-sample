#include "HelloWorld.hpp"

EzoRed::Sample::HelloWorld::HelloWorld()
{
	std::cout << "HelloWorld::HelloWorld" << std::endl;
}

EzoRed::Sample::HelloWorld::~HelloWorld()
{
	std::cout << "HelloWorld::~HelloWorld" << std::endl;
}

void EzoRed::Sample::HelloWorld::setGreetingMessage(const std::string &message)
{
	this->message = message;
}

std::string EzoRed::Sample::HelloWorld::getGreetingMessage()
{
	return message;
}

void EzoRed::Sample::HelloWorld::showGreetingMessage()
{
	std::cout << "Message: " << message << std::endl;
}