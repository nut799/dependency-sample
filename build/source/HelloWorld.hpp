#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

#include <string>
#include <iostream>

namespace Ezo {

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

#endif // HELLO_WORLD_H