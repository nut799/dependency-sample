#include "HelloWorldBridgeImpl.hpp"

Ezored::Sample::HelloWorldBridgeImpl::HelloWorldBridgeImpl() {
	proxy = nullptr;
}

std::shared_ptr<Ezored::Sample::HelloWorldBridge> Ezored::Sample::HelloWorldBridge::create() {
	std::shared_ptr<HelloWorldBridgeImpl> impl = std::make_shared<HelloWorldBridgeImpl>();

	std::shared_ptr<HelloWorld> shared = std::make_shared<HelloWorld>();
	impl->setShared(shared);

	return impl;
}

void Ezored::Sample::HelloWorldBridgeImpl::setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) {
	this->proxy = proxy;
}

std::shared_ptr<Ezored::Sample::HelloWorldProxy> Ezored::Sample::HelloWorldBridgeImpl::getProxy() {
	return proxy;
}

void Ezored::Sample::HelloWorldBridgeImpl::setGreetingMessage(const std::string & message) {
	shared->setGreetingMessage(message);
}

std::string Ezored::Sample::HelloWorldBridgeImpl::getGreetingMessage() {
	return shared->getGreetingMessage();
}

void Ezored::Sample::HelloWorldBridgeImpl::showGreetingMessage() {
	shared->showGreetingMessage();
}

void Ezored::Sample::HelloWorldBridgeImpl::showGreetingMessageAlert() {
	if (proxy != nullptr) {
		proxy->showGreetingMessageAlert();
	}
}

void Ezored::Sample::HelloWorldBridgeImpl::setShared(const std::shared_ptr<HelloWorld> & shared) {
	this->shared = shared;
}