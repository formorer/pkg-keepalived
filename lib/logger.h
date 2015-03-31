/* 
 * Soft:        Keepalived is a failover program for the LVS project
 *              <www.linuxvirtualserver.org>. It monitor & manipulate
 *              a loadbalanced server pool using multi-layer checks.
 * 
 * Part:        logging facility.
 *  
 * Author:      Alexandre Cassen, <acassen@linux-vs.org>
 *              
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2001-2012 Alexandre Cassen, <acassen@linux-vs.org>
 */

#ifndef _LOGGER_H
#define _LOGGER_H

#include <stdio.h>

void enable_console_log(void);
void log_message(int priority, const char* format, ...);

/* wrapper around the real log_message() to emit -Wformat= warnings */
#define log_message(priority, format, ...) do {\
	if (0) fprintf (NULL, format, ##__VA_ARGS__); \
	(log_message) (priority, format, ##__VA_ARGS__); \
} while (0)

#endif
