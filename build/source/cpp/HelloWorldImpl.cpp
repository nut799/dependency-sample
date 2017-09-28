#include "HelloWorldImpl.hpp"

namespace Ezored {

	HelloWorldImpl::HelloWorldImpl() {
		proxy = nullptr;
	}

    std::shared_ptr<HelloWorld> HelloWorld::create() {
		std::shared_ptr<HelloWorld> impl = std::make_shared<HelloWorldImpl>();
		return impl;
	}
	
	void HelloWorldImpl::setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) {
		this->proxy = proxy;
	}

	std::shared_ptr<HelloWorldProxy> HelloWorldImpl::getProxy() {
		return proxy;
	}

	void HelloWorldImpl::setGreetingMessage(const std::string & message) {
		// need implement (real_hello_world->set_greeting_message)
	}

	std::string HelloWorldImpl::getGreetingMessage() {
		return "Need implement";
	}

	void HelloWorldImpl::showGreetingMessage() {
		std::cout << "Need implement" << std::endl;
	}

	void HelloWorldImpl::showGreetingMessageAlert() {
		if (proxy != nullptr) {
			proxy->showGreetingMessageAlert();
		}
	}

}