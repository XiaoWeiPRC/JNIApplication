#include <jni.h>

jstring Java_com_example_administrator_jniapplication_DataProvider_getStringFromJNI(
        JNIEnv *env,
        jobject obj) {
    char *hello = "Hello from C";
    return (*env)->NewStringUTF(env, hello);
}

