/*
 *  example.c
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


#include <stdio.h>
#include "errdef.h"

int main() {
    fprintf(stderr, "%s\n", emsg(OK));
    fprintf(stderr, "%s\n", emsg(ERROR_UNDEF));
    fprintf(stderr, "%s\n", emsg(ERROR_UNDEF+10));
    fprintf(stderr, "%s\n", emsg(ERROR_DCNSTY));
    fprintf(stderr, "%s\n", emsg(CUSTOM_ERROR_1));
    fprintf(stderr, "%s\n", emsg(-1));
    fprintf(stderr, "%s\n", emsg(-28880));
    return 0;
}
