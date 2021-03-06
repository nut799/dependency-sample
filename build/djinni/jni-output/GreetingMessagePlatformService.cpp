// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proj.djinni

#include "GreetingMessagePlatformService.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

GreetingMessagePlatformService::GreetingMessagePlatformService() : ::djinni::JniInterface<::EzoRed::Sample::GreetingMessagePlatformService, GreetingMessagePlatformService>() {}

GreetingMessagePlatformService::~GreetingMessagePlatformService() = default;

GreetingMessagePlatformService::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

GreetingMessagePlatformService::JavaProxy::~JavaProxy() = default;

void GreetingMessagePlatformService::JavaProxy::showGreetingMessageAlert(const std::string & c_title, const std::string & c_message) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::GreetingMessagePlatformService>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_showGreetingMessageAlert,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_title)),
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_message)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
