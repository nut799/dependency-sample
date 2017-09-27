#pragma once

#include <string>
#include <iostream>

namespace Ezored {

	class HelloWorld
	{
	public:
		HelloWorld();
		~HelloWorld();

		void setGreetingMessage(const std::string &message);
		std::string getGreetingMessage();
		void showGreetingMessage();

	private:
		std::string message;
	};

}