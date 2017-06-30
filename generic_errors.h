/*
 *  generic_errors.h
 *
 *  This file is a part errors software.
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


#ifndef ERRORS_GENERIC_ERRORS_H
#define ERRORS_GENERIC_ERRORS_H


__errnum_message__(OK, ("no error"))


/*
 * Generic errors
 */
__errnum_message__(ERROR_UNKNOWN, ("unknown error"))
__errnum_message__(ERROR_NULLPTR, ("null pointer"))
__errnum_message__(ERROR_UNKNOWNSTATUS, ("uknown status"))
__errnum_message__(ERROR_DCNSTY, ("data consistency error"))
__errnum_message__(ERROR_PARAM, ("bad parameter"))
__errnum_message__(ERROR_SYSTEM, ("system error"))
__errnum_message__(ERROR_OBNDS, ("out of bounds"))
__errnum_message__(ERROR_EFAIL, ("expected fail"))
__errnum_message__(ERROR_WRT, ("write error"))
__errnum_message__(ERROR_VALUE, ("wrong value"))


#endif
