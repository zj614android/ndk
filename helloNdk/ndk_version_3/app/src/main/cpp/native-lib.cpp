#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_ndk_zj_com_ndk_1version_13_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
