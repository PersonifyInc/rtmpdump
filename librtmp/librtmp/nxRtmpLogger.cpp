#include "nxRtmpLogger.h"

// Windows-y string stuff
#include <atlstr.h>
#include <tchar.h>
#include <string>

#ifdef UNICODE
typedef std::wstring tstring;
#else
typedef std::string tstring;
#endif

// NxLogger
#include "Logger.h"

#define LOG_RTMP_DEBUG(fmt, ...) LOG_COMPONENT(rtmp, debug, fmt, __VA_ARGS__)
#define LOG_RTMP_INFO(fmt, ...) LOG_COMPONENT(rtmp, informative, fmt, __VA_ARGS__)
#define LOG_RTMP(fmt, ...) LOG_COMPONENT(rtmp, normal, fmt, __VA_ARGS__)
#define LOG_RTMP_NOTIFY(fmt, ...) LOG_COMPONENT(rtmp, notification, fmt, __VA_ARGS__)
#define LOG_RTMP_WARN(fmt, ...) LOG_COMPONENT(rtmp, warning, fmt, __VA_ARGS__)
#define LOG_RTMP_ERROR(fmt, ...) LOG_COMPONENT(rtmp, error, fmt, __VA_ARGS__)
#define LOG_RTMP_CRIT(fmt, ...) LOG_COMPONENT(rtmp, critical, fmt, __VA_ARGS__)

void nx_rtmp_log(char* log_msg)
{
    LOG_RTMP("%S", log_msg);
}
