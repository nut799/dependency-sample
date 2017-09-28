import os
import shutil
import subprocess

# remove all old djinni files
try:
    shutil.rmtree(path='build/djinni')
except:
    pass

# generate new files
subprocess.call([
    "/Users/paulo/Developer/workspaces/cpp/djinni/src/run",
    "--java-out", "build/djinni/java-output",
	"--java-package", "com.ezored.sample",
	"--ident-java-field", "mFooBar",

	"--cpp-out", "build/djinni/cpp-output",
	"--cpp-namespace", "Ezored",
	"--ident-cpp-field", "fooBar",
	"--ident-cpp-method", "fooBar",
	
	"--ident-jni-class", "NativeFooBar",
	"--ident-jni-file", "NativeFooBar",
	"--jni-out", "build/djinni/jni-output",

	"--objc-out", "build/djinni/objc-output",
	"--objc-type-prefix", "Ezored",
	"--objcpp-out", "build/djinni/objc-output",

	"--idl", "djinni/proj.djinni"	
])