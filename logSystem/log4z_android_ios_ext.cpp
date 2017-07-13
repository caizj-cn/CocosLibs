#include "log4z_android_ios_ext.h"

#ifdef __APPLE__
#include "cocos2d.h"
#endif

#if defined(ANDROID)
#include <jni.h>
#include <android/log.h>

#define  CN_LOG_TAG    "cnlog"
#define  CN_LOGD_PRINT(f, ...)  __android_log_print(ANDROID_LOG_DEBUG,CN_LOG_TAG,f, ##__VA_ARGS__)
#define  CN_LOGI_PRINT(f, ...)  __android_log_print(ANDROID_LOG_INFO,CN_LOG_TAG,f, ##__VA_ARGS__)
#define  CN_LOGW_PRINT(f, ...)  __android_log_print(ANDROID_LOG_WARN,CN_LOG_TAG,f, ##__VA_ARGS__)
#define  CN_LOGE_PRINT(f, ...)  __android_log_print(ANDROID_LOG_ERROR,CN_LOG_TAG,f, ##__VA_ARGS__)
#define  CN_LOGF_PRINT(f, ...)  __android_log_print(ANDROID_LOG_FATAL,CN_LOG_TAG,f, ##__VA_ARGS__)

#endif

void hook_log_func(const char* log)
{
#if defined(ANDROID)
	CN_LOGD_PRINT("%s", log);
#endif
}
