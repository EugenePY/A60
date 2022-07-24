
#pragma once

#include "quantum.h"

#define LAYOUT_all( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014,       K016, K017, \
	K100, K101,       K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117, \
	K200, K201,       K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214,       K216, K217, \
	K300, K301,       K303,       K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, \
	K400, K401,       K403, K404, K405,                         K410,                   K414, K415, K416, K417  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  KC_NO, K016,  K017 }, \
	{ K100,  K101,  KC_NO, K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117 }, \
	{ K200,  K201,  KC_NO, K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  KC_NO, K216,  K217 }, \
	{ K300,  K301,  KC_NO, K303,  KC_NO, K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  K317 }, \
	{ K400,  K401,  KC_NO, K403,  K404,  K405,  KC_NO, KC_NO, KC_NO, KC_NO, K410,  KC_NO, KC_NO, KC_NO, K414,  K415,  K416,  K417 }  \
}
