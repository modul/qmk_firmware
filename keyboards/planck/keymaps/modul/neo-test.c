
/* Neo
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   x  |   v  |   l  |   c  |   w  |   k  |   h  |   g  |   f  |   q  |  ß   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | M3   |   u  |   i  |   a  |   e  |   o  |   s  |   n  |   r  |   t  |   d  |  y   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift| M4   |   ü  |   ö  |   ä  |   p  |   z  |   b  |   m  |   ,  |   .  |j/Shft|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  |      |  Alt |Lower |    Space    |Raise | Alt  | CtEsc| Bspc |Enter |
 * `-----------------------------------------------------------------------------------'
 */
[_NEO] = LAYOUT_planck_grid(
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,           KC_P,    KC_LBRC,
    KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,           KC_SCLN, KC_QUOT,
    KC_LSFT,  KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,        KC_DOT,  RSFT_T(KC_SLSH),
    KC_LCTL,  KC_LGUI, XXXXXXX, KC_LALT, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_RALT, RCTL_T(KC_ESC), KC_BSPC, KC_ENT
),

/* Neo layer 3
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |  MSU |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  MSL |  MSD |  MSR |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  MS1 |  MS2 |  MS3 | Home | End  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_NEO_M3] = LAYOUT_planck_grid(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_MS_UP,    KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MS_LEFT, KC_MS_DOWN,  KC_MS_RIGHT, KC_RCBR, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MS_BTN1, KC_MS_BTN3,  KC_MS_BTN2, KC_HOME, KC_END,
    _______, _______, _______, _______, _______, _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
),

/* Neo layer 4
 * ,-----------------------------------------------------------------------------------.
 * |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      |      |      |      |  ]   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_NEO_M4] = LAYOUT_planck_grid(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RBRC,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

