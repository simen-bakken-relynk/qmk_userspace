#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

// Key Overrides: Change shifted behavior
// NO_SLSH (/) + Shift = NO_QUES (?)
// NO_COLN (:) + Shift = NO_SCLN (;)

const key_override_t slsh_to_ques = ko_make_basic(MOD_MASK_SHIFT, NO_SLSH, NO_QUES);
const key_override_t coln_to_scln = ko_make_basic(MOD_MASK_SHIFT, NO_COLN, NO_SCLN);

const key_override_t *key_overrides[] = {
    &slsh_to_ques,
    &coln_to_scln,
    NULL
};
