#include "ndk_zj_com_ndk_version_2_jni_FootBallJni.h"

/*
 * Class:     ndk_zj_com_ndk_version_2_jni_FootBallJni
 * Method:    ballInfoShow
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ndk_zj_com_ndk_1version_12_jni_FootBallJni_ballInfoShow
  (JNIEnv *env, jobject jobj){
   return env->NewStringUTF("i am football");
}

