#pragma once
/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/** Protocol decoder support functions
 *
 * @file src/lib/util/encode.h
 *
 * @copyright 2021 Network RADIUS SAS
 */
RCSIDH(encode_h, "$Id$")

#ifdef __cplusplus
extern "C" {
#endif

#include <freeradius-devel/util/pair.h>
#include <freeradius-devel/util/dbuff.h>
#include <freeradius-devel/util/proto.h>

/** Typedefs for simplifying the use and declaration of protocol encoders
 *
 */
typedef struct fr_proto_encode_ctx_s fr_proto_encode_ctx_t;

typedef ssize_t (*fr_proto_encode_pair_t)(fr_dbuff_t *dbuff, fr_da_stack_t *da_stack, unsigned int depth,
					   fr_dcursor_t *cursor, fr_proto_encode_ctx_t *encode_ctx);

#define PROTO_ENCODE_FUNC(_name) static ssize_t _name(fr_dbuff_t *dbuff, fr_da_stack_t *da_stack, unsigned int depth, \
					   fr_dcursor_t *cursor, fr_proto_encode_ctx_t *encode_ctx);

#ifdef __cplusplus
}
#endif
