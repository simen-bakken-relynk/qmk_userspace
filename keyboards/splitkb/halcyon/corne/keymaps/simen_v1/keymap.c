#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

void keyboard_post_init_user(void) {
    set_unicode_input_mode(UNICODE_MODE_LINUX);  // or UNICODE_MODE_WINCOMPOSE
}

enum custom_keycodes {
    AE_KEY = SAFE_RANGE,
    OE_KEY,
    AA_KEY,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case AE_KEY:  // æ/Æ
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    unregister_mods(MOD_MASK_SHIFT);
                    send_unicode_string("Æ");
                    register_mods(MOD_MASK_SHIFT);
                } else {
                    send_unicode_string("æ");
                }
            }
            return false;
            
        case OE_KEY:  // ø/Ø
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    unregister_mods(MOD_MASK_SHIFT);
                    send_unicode_string("Ø");
                    register_mods(MOD_MASK_SHIFT);
                } else {
                    send_unicode_string("ø");
                }
            }
            return false;
            
        case AA_KEY:  // å/Å
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    unregister_mods(MOD_MASK_SHIFT);
                    send_unicode_string("Å");
                    register_mods(MOD_MASK_SHIFT);
                } else {
                    send_unicode_string("å");
                }
            }
            return false;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_corne_hlc(
        KC_ESC  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,    KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , AA_KEY ,
        KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,    KC_H    , KC_J    , KC_K    , KC_L    , OE_KEY , AE_KEY ,
        KC_LGUI , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,    KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_COLN ,
                            KC_LCTL , LT(1,KC_BSPC), LT(5,KC_DEL),    MT(MOD_LALT,KC_ENT), LT(2,KC_SPC), KC_LSFT,
                  KC_MUTE , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,    KC_MUTE , KC_NO   , KC_NO   , KC_NO   , KC_NO
    ),
    [1] = LAYOUT_corne_hlc(
        KC_ESC     , _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , KC_HOME , KC_END  , _______ , KC_F12  ,
        A(KC_TAB)  , OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),    KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT, _______ , KC_F11  ,
        KC_LGUI    , C(KC_Z) , C(KC_X) , C(KC_C) , C(KC_V) , KC_PSCR ,    _______ , KC_PGDN , KC_PGUP , _______ , _______ , KC_F10  ,
                               _______ , _______ , _______ ,              _______ , _______ , _______ ,
                     _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , _______ , _______ , _______
    ),
    [2] = LAYOUT_corne_hlc(
        KC_ESC  , KC_QUOT , KC_LABK , KC_RABK , KC_DQUO , KC_GRV  ,    KC_AMPR , KC_UNDS , KC_LBRC , KC_RBRC , KC_PERC , _______ ,
        KC_TAB  , KC_EXLM , KC_MINS , KC_PLUS , KC_EQL  , KC_HASH ,    KC_PIPE , KC_COLN , KC_LPRN , KC_RPRN , KC_SCLN , KC_DQUO ,
        KC_LGUI , KC_CIRC , KC_SLSH , KC_ASTR , KC_BSLS , KC_AT   ,    KC_TILD , KC_DLR  , KC_LCBR , KC_RCBR , KC_QUES , _______ ,
                            _______ , _______ , _______ ,              _______ , _______ , _______ ,
                  _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , _______ , _______ , _______
    ),
    [3] = LAYOUT_corne_hlc(
        QK_BOOT , DF(0)   , _______ , _______ , UC_PREV , UC_NEXT ,    _______ , KC_F7   , KC_F8   , KC_F9   , KC_F12  , KC_F15  ,
        _______ , KC_LGUI , OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),    _______ , KC_F4   , KC_F5   , KC_F6   , KC_F11  , KC_F14  ,
        KC_LGUI , RM_NEXT , RM_HUEU , RM_SATU , RM_VALU , RM_TOGG ,    _______ , KC_F1   , KC_F2   , KC_F3   , KC_F10  , KC_F13  ,
                            _______ , _______ , _______ ,              _______ , _______ , _______ ,
                  _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , _______ , _______ , _______
    ),
    [4] = LAYOUT_corne_hlc(
        _______ , C(KC_1) , C(KC_2) , C(KC_3) , C(KC_4) , C(KC_5) ,    C(KC_6) , C(KC_7) , C(KC_8) , C(KC_9) , C(KC_0) , _______ ,
        _______ , A(KC_1) , A(KC_2) , A(KC_3) , A(KC_4) , A(KC_5) ,    A(KC_6) , A(KC_7) , A(KC_8) , A(KC_9) , A(KC_0) , _______ ,
        KC_LGUI , _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , _______ , _______ , _______ , _______ ,
                            _______ , _______ , _______ ,              _______ , _______ , _______ ,
                  _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , _______ , _______ , _______
    ),
    [5] = LAYOUT_corne_hlc(
        RM_TOGG , KC_F7   , KC_F8   , KC_F9   , KC_F12  , KC_F15  ,    UC_NEXT , KC_7    , KC_8    , KC_9    , RM_VALD , RM_VALU ,
        RM_NEXT , KC_F4   , KC_F5   , KC_F6   , KC_F11  , KC_F14  ,    UC_PREV , KC_4    , KC_5    , KC_6    , RM_SATD , RM_SATU ,
        RM_PREV , KC_F1   , KC_F2   , KC_F3   , KC_F10  , KC_F13  ,    DF(0)   , KC_1    , KC_2    , KC_3    , RM_HUED , RM_HUEU ,
                            _______ , _______ , _______ ,              _______ , KC_0    , _______ ,
                  _______ , _______ , _______ , _______ , _______ ,    _______ , _______ , _______ , _______ , _______
    )
};
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [4] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)},
    [5] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)}
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


