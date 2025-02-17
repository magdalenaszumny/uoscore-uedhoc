/*
 * Generated using zcbor version 0.3.99
 * https://github.com/NordicSemiconductor/zcbor
 * Generated with a --default-max-qty of 3
 */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include "zcbor_decode.h"
#include "cbor/edhoc_decode_int_type.h"

#if DEFAULT_MAX_QTY != 3
#error "The type file was generated with a different default_max_qty than this file"
#endif


static bool decode_int_type_i(
		zcbor_state_t *state, int32_t *result)
{
	zcbor_print("%s\r\n", __func__);

	bool tmp_result = (((zcbor_int32_decode(state, (&(*result))))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}



bool cbor_decode_int_type_i(
		const uint8_t *payload, size_t payload_len,
		int32_t *result,
		size_t *payload_len_out)
{
	zcbor_state_t states[2];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = decode_int_type_i(states, result);

	if (ret && (payload_len_out != NULL)) {
		*payload_len_out = MIN(payload_len,
				(size_t)states[0].payload - (size_t)payload);
	}

	return ret;
}
