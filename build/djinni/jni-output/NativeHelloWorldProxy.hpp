// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proj.djinni

#pragma once

#include "djinni_support.hpp"
#include "hello_world_proxy.hpp"

namespace djinni_generated {

class NativeHelloWorldProxy final : ::djinni::JniInterface<::EzoRed::Sample::HelloWorldProxy, NativeHelloWorldProxy> {
public:
    using CppType = std::shared_ptr<::EzoRed::Sample::HelloWorldProxy>;
    using CppOptType = std::shared_ptr<::EzoRed::Sample::HelloWorldProxy>;
    using JniType = jobject;

    using Boxed = NativeHelloWorldProxy;

    ~NativeHelloWorldProxy();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeHelloWorldProxy>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeHelloWorldProxy>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeHelloWorldProxy();
    friend ::djinni::JniClass<NativeHelloWorldProxy>;
    friend ::djinni::JniInterface<::EzoRed::Sample::HelloWorldProxy, NativeHelloWorldProxy>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::EzoRed::Sample::HelloWorldProxy
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void showGreetingMessageAlert() override;

    private:
        friend ::djinni::JniInterface<::EzoRed::Sample::HelloWorldProxy, ::djinni_generated::NativeHelloWorldProxy>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/ezored/sample/HelloWorldProxy") };
    const jmethodID method_showGreetingMessageAlert { ::djinni::jniGetMethodID(clazz.get(), "showGreetingMessageAlert", "()V") };
};

}  // namespace djinni_generated
