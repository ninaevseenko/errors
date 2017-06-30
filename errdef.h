/*
 *  errdef.h
 *
 *  This file is a part Errors software.
 *
 *  (C) 2017  Nina Evseenko <anvoebugz@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef ERRORS_DEF_H
#define ERRORS_DEF_H

#define __errnum_message__(errnum,msg)  errnum,

enum EErrors {
#include "errors.h"
ERROR_UNDEF,
ERROR_BOUND
};

#undef __errnum_message__

extern const char* __errmsg[];

#define emsg(e) __errmsg[((unsigned int)e) % ERROR_BOUND]

#endif
