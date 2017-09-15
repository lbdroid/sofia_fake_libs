#include <jni.h>
#include <android/log.h>
#include "jni_i2c.h"

extern "C" {

    JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_openW(JNIEnv *env, jobject object1, jstring filename){
        const char* w_buf = env->GetStringUTFChars(filename, 0);

        if(w_buf == NULL) {
            __android_log_print(ANDROID_LOG_DEBUG, "JNII2C_WRAPPER-open","NULL STRING");
        } else {
            __android_log_print(ANDROID_LOG_DEBUG, "JNII2C_WRAPPER-open","%s", w_buf);
        }

        env->ReleaseStringUTFChars(filename, w_buf);
        return Java_com_syu_jni_JniI2c_open(env, object1, filename);
    }

    JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_closeW(JNIEnv *env, jobject object1, jint fd) {
        __android_log_print(ANDROID_LOG_DEBUG, "JNII2C_WRAPPER-close", "FD: 0x%08x", fd);
        return Java_com_syu_jni_JniI2c_close(env, object1, fd);
    }

    JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_readRkW(JNIEnv *env, jobject object1, jint fd, jint sa, jint ra) {
        __android_log_print(ANDROID_LOG_DEBUG, "JNII2C_WRAPPER-readRk", "FD: 0x%08x, SA: 0x%02x, RA: 0x%02x", fd, sa, ra);
        return Java_com_syu_jni_JniI2c_readRk(env, object1, fd, sa, ra);
    }

    JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_writeW(JNIEnv *env, jobject object1, jint fd, jint sa, jint ra, jint val) {
        __android_log_print(ANDROID_LOG_DEBUG, "JNII2C_WRAPPER-write", "FD: 0x%08x, SA: 0x%02x, RA: 0x%02x, VAL: 0x%02x", fd, sa, ra, val);
        return Java_com_syu_jni_JniI2c_write(env, object1, fd, sa, ra, val);
    }

    JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_writeRkW(JNIEnv *env, jobject object1, jint fd, jint sa, jint ra, jint val) {
        __android_log_print(ANDROID_LOG_DEBUG, "JNII2C_WRAPPER-writeRk", "FD: 0x%08x, SA: 0x%02x, RA: 0x%02x, VAL: 0x%02x", fd, sa, ra, val);
        return Java_com_syu_jni_JniI2c_writeRk(env, object1, fd, sa, ra, val);
    }
}
