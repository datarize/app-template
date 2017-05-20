#include <jni.h>"
#include "shared_c.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_datarize_shell_Native_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    if( get5() == 7 ){
        return env->NewStringUTF("Hello from 6");
    }else {
        return env->NewStringUTF("Hello from C");
    }

}
