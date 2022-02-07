#pragma once

#include "color.h"
#include <string>

#ifndef CONSOLE_H
#define CONSOLE_H

//Print a message inside the command console
void log_cons(std::string log, unsigned short clr);

#define LOG_NOERROR(noerror) CONSOLE_LOG(noerror, COLOR_NOERROR)
#define LOG_HINT(hint) CONSOLE_LOG(hint, COLOR_HINT)
#define LOG_WARNING(warning) CONSOLE_LOG(warning, COLOR_WARNING)
#define LOG_ERROR(error) CONSOLE_LOG(error, COLOR_ERROR)

#endif // CONSOLE_H
