#include <jni.h>
#include <android/log.h>

extern "C" JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_open(JNIEnv *env, jobject, jstring filename){
    const char* w_buf = env->GetStringUTFChars(filename, 0);

    if(w_buf == NULL) {
        __android_log_print(ANDROID_LOG_DEBUG, "JNII2C-open","NULL STRING");
    } else {
        __android_log_print(ANDROID_LOG_DEBUG, "JNII2C-open","%s", w_buf);
    }

    env->ReleaseStringUTFChars(filename, w_buf);

    return 2;
}

extern "C" JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_close(JNIEnv, jobject, jint fd){
    __android_log_print(ANDROID_LOG_DEBUG, "JNII2C-close", "FD: 0x%08x", fd);
    return 2;
}

extern "C" JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_readRk(JNIEnv, jobject, jint fd, jint sa, jint ra){
    __android_log_print(ANDROID_LOG_DEBUG, "JNII2C-readRk", "FD: 0x%08x, SA: 0x%02x, RA: 0x%02x", fd, sa, ra);
    return 2;
}

extern "C" JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_write(JNIEnv, jobject, jint fd, jint sa, jint ra, jint val){
    __android_log_print(ANDROID_LOG_DEBUG, "JNII2C-write", "FD: 0x%08x, SA: 0x%02x, RA: 0x%02x, VAL: 0x%02x", fd, sa, ra, val);
    return 2;
}

extern "C" JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_writeRk(JNIEnv, jobject, jint fd, jint sa, jint ra, jint val){
    __android_log_print(ANDROID_LOG_DEBUG, "JNII2C-writeRk", "FD: 0x%08x, SA: 0x%02x, RA: 0x%02x, VAL: 0x%02x", fd, sa, ra, val);
    return 2;
}