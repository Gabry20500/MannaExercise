#include "console.h"

#ifdef WIN32

#include <Windows.h>
#include <iostream>

void console(const std::string log, const unsigned short clr) 
{
	void* output_cons = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output_cons, clr);
	std::cout << log.c_str() << "\n";
	SetConsoleTextAttribute(output_cons, COLOR_WHITE);
}
#endif // WIN32
