/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define ACTIONMAP_ENC( \
	K00, K01, K02, K03,    \
	     K11, K12, K13,    \
	K20, K21, K22,         \
	K30, K31, K32,    \
	K40,           K43,  \
	R0P, R0N, K44\
) { \
	{ AC_##K00, AC_##K01, AC_##K02, AC_##K03,   AC_NO }, \
	{ AC_NO,    AC_##K11, AC_##K12, AC_##K13,   AC_NO }, \
	{ AC_##K20, AC_##K21, AC_##K22, AC_NO,      AC_NO }, \
	{ AC_##K30, AC_##K31, AC_##K32, AC_NO,      AC_NO }, \
	{ AC_##K40, AC_##R0P, AC_##R0N, AC_##K43,   AC_##K44   }, \
}

