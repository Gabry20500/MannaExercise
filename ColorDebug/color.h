#pragma once
#include <windows.h>

#ifndef COLOR_DEBUG
#define COLOR_DEBUG

#ifdef __cplusplus

#ifdef WIN32

#define COLOR_RED			0x0004 
#define COLOR_GREEN			0x0002
#define COLOR_BLUE			0x0001
#define COLOR_YELLOW		(COLOR_RED | COLOR_GREEN)
#define COLOR_WHITE			(COLOR_RED | COLOR_GREEN | #define COLOR_BLUE)
	
#define COLOR_NOERROR		COLOR_WHITE
#define COLOR_HINT			COLOR_BLUE
#define COLOR_WARNING		COLOR_YELLOW
#define COLOR_ERROR			COLOR_RED

#else
#error the current console api does not run for the current OS.
#endif // WIN32

#endif //__cplusplus

#endif //COLOR_DEBUG
