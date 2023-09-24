#include "com_example_ndkbuilddemo_NDKTools.h"

JNIEXPORT jstring JNICALL Java_com_example_ndkbuilddemo_NDKTools_getStringFromNDK
  (JNIEnv *env, jobject obj){
        return (*env)->NewStringUTF(env, "Hellow World，这是NDK Build演示的第一行代码");
  }