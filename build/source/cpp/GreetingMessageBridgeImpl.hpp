#pragma once

#include <string>
#include <iostream>
#include <greeting_message_bridge.hpp>
#include <greeting_message_platform_service.hpp>
#include <ezored/sample/GreetingMessage.hpp>

namespace EzoRed { namespace Sample {
	
class GreetingMessageBridgeImpl : public GreetingMessageBridge
{
public:
	GreetingMessageBridgeImpl();

	static std::shared_ptr<GreetingMessageBridge> sharedInstance(const std::shared_ptr<GreetingMessagePlatformService> & ps);
    static std::shared_ptr<GreetingMessageBridgeImpl> internalSharedInstance(const std::shared_ptr<GreetingMessagePlatformService> & ps);

	void setMessage(const std::string & message) override;
	std::string getMessage() override;
	void printMessage() override;
	void showGreetingMessageAlert(const std::string & title, const std::string & message) override;
	void setGM(const std::shared_ptr<GreetingMessage> & gm);

private:
    static std::shared_ptr<GreetingMessageBridgeImpl> instance;

	std::shared_ptr<GreetingMessagePlatformService> ps;
	std::shared_ptr<GreetingMessage> gm;
};

}}
