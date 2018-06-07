#include <jni.h>
#include <string>
//#include <ndk_zj_com_ndk_version_3_jni_BasketBallJni.h> //这么写会有问题 编译不通过


extern "C" JNIEXPORT jstring JNICALL
Java_ndk_zj_com_ndk_1version_13_jni_BasketBallJni_ballInfoShow
  (JNIEnv *env, jobject job){

    std::string hello = "I am BasketBall...";
    return env->NewStringUTF(hello.c_str());
}