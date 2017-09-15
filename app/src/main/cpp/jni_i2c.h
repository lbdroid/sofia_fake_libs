#include <jni.h>

#ifndef JNI_JNI_I2C_H
#define JNI_JNI_I2C_H

extern "C" {
JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_open(JNIEnv*, jobject, jstring);
JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_close(JNIEnv*, jobject, jint);
JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_readRk(JNIEnv*, jobject, jint, jint, jint);
JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_write(JNIEnv*, jobject, jint, jint, jint, jint);
JNIEXPORT jint JNICALL Java_com_syu_jni_JniI2c_writeRk(JNIEnv*, jobject, jint, jint, jint, jint);
}

#endif //JNI_JNI_I2C_H