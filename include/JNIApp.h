/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNIApp */

#ifndef _Included_JNIApp
#define _Included_JNIApp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JNIApp
 * Method:    factorial
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNIApp_factorial
  (JNIEnv *, jobject, jint);

/*
 * Class:     JNIApp
 * Method:    power
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JNIApp_power
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     JNIApp
 * Method:    print_string
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JNIApp_print_1string
  (JNIEnv *, jclass, jstring);

/*
 * Class:     JNIApp
 * Method:    num_to_bool
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_JNIApp_num_1to_1bool
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
