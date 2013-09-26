#pragma once

#include <stdarg.h>

/* C accessible defines below here... */
#ifdef __cplusplus
extern "C" {
#endif

void nx_rtmp_log(char* log_msg);
void nx_rtmp_log_sev(int level, char* msg);

#ifdef __cplusplus
}
#endif