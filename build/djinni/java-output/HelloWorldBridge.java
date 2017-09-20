// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proj.djinni

package com.ezored.sample;

import java.util.concurrent.atomic.AtomicBoolean;

/** EZO::HelloWorld */
public abstract class HelloWorldBridge {
    public abstract void setGreetingMessage(String message);

    public abstract String getGreetingMessage();

    public abstract void showGreetingMessage();

    public static native HelloWorldBridge create();

    private static final class CppProxy extends HelloWorldBridge
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public void setGreetingMessage(String message)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setGreetingMessage(this.nativeRef, message);
        }
        private native void native_setGreetingMessage(long _nativeRef, String message);

        @Override
        public String getGreetingMessage()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getGreetingMessage(this.nativeRef);
        }
        private native String native_getGreetingMessage(long _nativeRef);

        @Override
        public void showGreetingMessage()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_showGreetingMessage(this.nativeRef);
        }
        private native void native_showGreetingMessage(long _nativeRef);
    }
}
