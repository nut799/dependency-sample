// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proj.djinni

#include "NativeHelloWorldBridge.hpp"  // my header
#include "Marshal.hpp"
#include "NativeHelloWorldProxy.hpp"

namespace djinni_generated {

NativeHelloWorldBridge::NativeHelloWorldBridge() : ::djinni::JniInterface<::Ezored::Sample::HelloWorldBridge, NativeHelloWorldBridge>("com/ezored/sample/HelloWorldBridge$CppProxy") {}

NativeHelloWorldBridge::~NativeHelloWorldBridge() = default;


CJNIEXPORT void JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Ezored::Sample::HelloWorldBridge>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_ezored_sample_HelloWorldBridge_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::Ezored::Sample::HelloWorldBridge::create();
        return ::djinni::release(::djinni_generated::NativeHelloWorldBridge::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_native_1setProxy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_proxy)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Ezored::Sample::HelloWorldBridge>(nativeRef);
        ref->setProxy(::djinni_generated::NativeHelloWorldProxy::toCpp(jniEnv, j_proxy));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_native_1getProxy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Ezored::Sample::HelloWorldBridge>(nativeRef);
        auto r = ref->getProxy();
        return ::djinni::release(::djinni_generated::NativeHelloWorldProxy::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_native_1setGreetingMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_message)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Ezored::Sample::HelloWorldBridge>(nativeRef);
        ref->setGreetingMessage(::djinni::String::toCpp(jniEnv, j_message));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_native_1getGreetingMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Ezored::Sample::HelloWorldBridge>(nativeRef);
        auto r = ref->getGreetingMessage();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_native_1showGreetingMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Ezored::Sample::HelloWorldBridge>(nativeRef);
        ref->showGreetingMessage();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_ezored_sample_HelloWorldBridge_00024CppProxy_native_1showGreetingMessageAlert(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Ezored::Sample::HelloWorldBridge>(nativeRef);
        ref->showGreetingMessageAlert();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated