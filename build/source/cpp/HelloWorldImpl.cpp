#include "HelloWorldImpl.hpp"

namespace Ezored {

	HelloWorldImpl::HelloWorldImpl() {
		proxy = nullptr;
	}

    std::shared_ptr<HelloWorld> HelloWorld::create() {
		std::shared_ptr<HelloWorld> impl = std::make_shared<HelloWorldImpl>();
		return impl;
	}
	
	void HelloWorldImpl::set_proxy(const std::shared_ptr<HelloWorldProxy> & proxy) {
		this->proxy = proxy;
	}

	std::shared_ptr<HelloWorldProxy> HelloWorldImpl::get_proxy() {
		return proxy;
	}

	void HelloWorldImpl::set_greeting_message(const std::string & message) {
		// need implement (real_hello_world->set_greeting_message)
	}

	std::string HelloWorldImpl::get_greeting_message() {
		return "Need implement";
	}

	void HelloWorldImpl::show_greeting_message() {
		std::cout << "Need implement" << std::endl;
	}

	void HelloWorldImpl::show_greeting_message_alert() {
		if (proxy != nullptr) {
			proxy->show_greeting_message_alert();
		}
	}

}