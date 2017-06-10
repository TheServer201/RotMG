/* serial.h - Serialization helper
 * Copyright (C) 2017 TheServer201
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Why memcpy ? http://stackoverflow.com/a/32095106
 */

#include "shared.h"

uint16_t inline BsWord(uint16_t x) {
	return ((x & 0x00FF) << 8) |
	       ((x & 0xFF00) >> 8);
}

uint32_t inline BsDword(uint32_t x) {
	return ((x & 0x000000FF) << 24) |
	       ((x & 0x0000FF00) <<  8) |
	       ((x & 0x00FF0000) >>  8) |
	       ((x & 0xFF000000) >> 24);
}

#define BsData(i) ({		\
	_Generic((i),		\
	uint16_t: BsWord(i),	\
	uint32_t: BsDword(i),	\
	default: (i));		\
})

#define ToData(o, i) ({			\
	memcpy(&o, i, sizeof(i));	\
})

#define FrData(o, i) ({			\
	memcpy(o, &i, sizeof(i));	\
})

#define RdData(o, i) ({	\
	ToData(o, i);	\
	i += sizeof(o);	\
})

#define WrData(o, i) ({	\
	FrData(o, i);	\
	o += sizeof(i);	\
})

#define RsData(o, i) ({	\
	RdData(o, i);	\
	o = BsData(o);	\
})

#define WsData(o, i) ({	\
    i = BsData(i);	\
	WrData(o, i);	\
})
