/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// #: One-shot shift

#define ONESHOT_TIMEOUT 500
// Caps-lock on double tap
#define ONESHOT_TAP_TOGGLE 2

// #: Tap-hold

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 180
#define TAPPING_TERM_PER_KEY

// Enable `PERMISSIVE_HOLD` to allow nested taps to activate the hold function.
// Refs: https://precondition.github.io/home-row-mods#permissive-hold
#define PERMISSIVE_HOLD

// Don't enable `TAPPING_FORCE_HOLD` to allow tap+hold to repeat tapped key.
// Refs: https://preconditidon.github.io/home-row-mods#tapping-force-hold
// #define TAPPING_FORCE_HOLD

// #: Misc

// Refs: https://getreuer.info/posts/keyboards/select-word/index.html
#define SELECT_WORD_TIMEOUT 2000
