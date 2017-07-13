#ifndef __CN_LOG_H__
#define __CN_LOG_H__

#include "cocos2d.h"
#include "log4z.h"

USING_NS_CC;

// 启动日志
#define CNLOGEX_START(path) { \
	zsummer::log4z::ILog4zManager::getInstance()->setLoggerPath(LOG4Z_MAIN_LOGGER_ID, path.c_str()); \
	zsummer::log4z::ILog4zManager::getInstance()->start(); \
	path = "************log store path:" + path; \
	LOGE(path.c_str()); \
}

// Trace
#define CNLOGEX_TRACE(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGT(buf); \
}


// Debug
#define CNLOGEX_DEBUG(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGD(buf); \
}


// Info
#define CNLOGEX_INFO(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGI(buf); \
}

// Warn
#define CNLOGEX_WARN(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGW(buf); \
}

// Error
#define CNLOGEX_ERROR(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGE(buf); \
}

// Alarm
#define CNLOGEX_ALARM(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGA(buf); \
}

// Fatal
#define CNLOGEX_FATAL(format, ...) { \
	char buf[MAX_LOG_LENGTH] = { 0 }; \
	sprintf(buf, format, ##__VA_ARGS__); \
	strcat(buf, "\n"); \
	LOGF(buf); \
}

#endif		//__CN_LOG_H__
