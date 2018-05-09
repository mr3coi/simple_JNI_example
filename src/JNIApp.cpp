#include "JNIApp.h"
#include <iostream>

/*
 * Class:     JNIApp
 * Method:    factorial
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_JNIApp_factorial(JNIEnv *env, jobject obj, jint num) {
	int out = 1;
	for (;num>1;num--) {
		out *= num;
	}
	return (jint)out;
}

/*
 * Class:     JNIApp
 * Method:    power
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_JNIApp_power (JNIEnv *env, jobject obj, jint b, jint e) {
	int out = 1;
	for (;e>0;e--)
		out *= b;
	return (jint)out;
}

/*
 * Class:     JNIApp
 * Method:    print_string
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_JNIApp_print_1string(JNIEnv *env, jclass cls, jstring str) {
	jboolean iscopy = false;
	const char * input = env->GetStringUTFChars(str, &iscopy);
	//std::cout << input << std::endl;
}

/*
 * Class:     JNIApp
 * Method:    num_to_bool
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_JNIApp_num_1to_1bool(JNIEnv *env, jclass cls, jint num) {
	jboolean out = num;
	return out;
}
