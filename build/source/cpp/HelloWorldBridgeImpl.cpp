#include "HelloWorldBridgeImpl.hpp"

EzoRed::Sample::HelloWorldBridgeImpl::HelloWorldBridgeImpl() {
	proxy = nullptr;
}

std::shared_ptr<EzoRed::Sample::HelloWorldBridge> EzoRed::Sample::HelloWorldBridge::create() {
	std::shared_ptr<HelloWorldBridgeImpl> impl = std::make_shared<HelloWorldBridgeImpl>();

	std::shared_ptr<HelloWorld> shared = std::make_shared<HelloWorld>();
	impl->setShared(shared);

	return impl;
}

void EzoRed::Sample::HelloWorldBridgeImpl::setProxy(const std::shared_ptr<HelloWorldProxy> & proxy) {
	this->proxy = proxy;
}

std::shared_ptr<EzoRed::Sample::HelloWorldProxy> EzoRed::Sample::HelloWorldBridgeImpl::getProxy() {
	return proxy;
}

void EzoRed::Sample::HelloWorldBridgeImpl::setGreetingMessage(const std::string & message) {
	shared->setGreetingMessage(message);
}

std::string EzoRed::Sample::HelloWorldBridgeImpl::getGreetingMessage() {
	return shared->getGreetingMessage();
}

void EzoRed::Sample::HelloWorldBridgeImpl::showGreetingMessage() {
	shared->showGreetingMessage();
}

void EzoRed::Sample::HelloWorldBridgeImpl::showGreetingMessageAlert() {
	if (proxy != nullptr) {
		proxy->showGreetingMessageAlert();
	}
}

void EzoRed::Sample::HelloWorldBridgeImpl::setShared(const std::shared_ptr<HelloWorld> & shared) {
	this->shared = shared;
}