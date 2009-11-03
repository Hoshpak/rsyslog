/* header for parser.c
 * This is not yet an object, but contains all those code necessary to
 * parse syslog messages.
 *
 * Copyright 2008 Rainer Gerhards and Adiscon GmbH.
 *
 * This file is part of the rsyslog runtime library.
 *
 * The rsyslog runtime library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * The rsyslog runtime library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with the rsyslog runtime library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * A copy of the LGPL can be found in the file "COPYING.LESSER" in this distribution.
 */
#ifndef INCLUDED_PARSE_H
#define INCLUDED_PARSE_H

/* the parser object, a dummy because we have only static methods */
typedef struct parser_s {
	BEGINobjInstance;	/* Data to implement generic object - MUST be the first data element! */
} parser_t;

/* interfaces */
BEGINinterface(parser) /* name must also be changed in ENDinterface macro! */
	INTERFACEObjDebugPrint(var);
	rsRetVal (*ParseMsg)(msg_t *pMsg);
ENDinterface(parser)
#define parserCURR_IF_VERSION 1 /* increment whenever you change the interface above! */


/* prototypes */
PROTOTYPEObj(parser);


#endif /* #ifndef INCLUDED_PARSE_H */
