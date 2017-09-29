#include "HelloWorldBridgeImpl.hpp"

namespace Ezored {

	HelloWorldBridgeImpl::HelloWorldBridgeImpl() {
		proxy = nullptr;
	}

    std::shared_ptr<HelloWorldBridge> HelloWorldBridgeImpl::create() {
		std::shared_ptr<HelloWorldBridge> impl = std::make_shared<HelloWorldBridgeImpl>();

		std::shared_ptr<HelloWorld> shared = std::make_shared<HelloWorld>();
		impl->setShared(shared);

		return impl;
	}
	
	void HelloWorldBridgeImpl::setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) {
		this->proxy = proxy;
	}

	std::shared_ptr<HelloWorldProxy> HelloWorldBridgeImpl::getProxy() {
		return proxy;
	}

	void HelloWorldBridgeImpl::setGreetingMessage(const std::string & message) {
		shared->setGreetingMessage(message);
	}

	std::string HelloWorldBridgeImpl::getGreetingMessage() {
		return shared->getGreetingMessage();
	}

	void HelloWorldBridgeImpl::showGreetingMessage() {
		shared->showGreetingMessage();
	}

	void HelloWorldBridgeImpl::showGreetingMessageAlert() {
		if (proxy != nullptr) {
			proxy->showGreetingMessageAlert();
		}
	}

	void setShared(const std::shared_ptr<HelloWorld> & shared) {
		this->shared = shared;
	}

}