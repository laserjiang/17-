#ifndef KB_H
#define KB_H

#include "quantum.h"

#define LAYOUT( \
	K00,      K02,      K04,      K06, \
	     K11,           K14, K15, K16, \
	K20, K21, K22, K23, K24, K25, K26, \
	          K32,      K34  \
) { \
	{ K00,   KC_NO, K02,   KC_NO, K04,   KC_NO, K06 }, \
	{ KC_NO, K11,   KC_NO, KC_NO, K14,   K15,   K16 }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26 }, \
	{ KC_NO, KC_NO, K32,   KC_NO, K34,   KC_NO, KC_NO }  \
}

#endif
