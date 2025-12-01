#pragma once

// =============================================================================
// Solid/Static Effects
// =============================================================================
#define ENABLE_RGB_MATRIX_SOLID_COLOR              // Static single color

// =============================================================================
// Gradient/Wave Effects
// =============================================================================
// #define ENABLE_RGB_MATRIX_ALPHAS_MODS              // Static dual color by key type
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN         // Static gradient top to bottom
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT      // Static gradient left to right
#define ENABLE_RGB_MATRIX_BREATHING                // Solid color breathing
#define ENABLE_RGB_MATRIX_BAND_SAT                 // Saturation band moving left to right
// #define ENABLE_RGB_MATRIX_BAND_VAL                 // Brightness band moving left to right
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT          // Saturation spiral outward
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL          // Brightness spiral outward
// #define ENABLE_RGB_MATRIX_CYCLE_ALL                // Full gradient cycling through all keys
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT         // Gradient wave left to right
// #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN            // Gradient wave top to bottom
// #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN             // Gradient wave center outward
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL             // Spiral gradient animation
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON   // Rainbow chevron moving
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL           // Rotating pinwheel gradient
// #define ENABLE_RGB_MATRIX_DUAL_BEACON              // Two rotating beacons
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON           // Rainbow rotating from center
#define ENABLE_RGB_MATRIX_RAINDROPS                // Random color raindrops
// #define ENABLE_RGB_MATRIX_HUE_WAVE                 // Hue wave across keyboard

// =============================================================================
// Reactive Effects (respond to keypresses)
// =============================================================================
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE    // Solid color pulse on keypress
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE           // Solid reactive fade
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE      // Wide reactive effect
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS     // Cross pattern on keypress
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS     // Nexus effect on keypress
// #define ENABLE_RGB_MATRIX_SPLASH                   // Full rainbow splash on keypress
#define ENABLE_RGB_MATRIX_SOLID_SPLASH             // Solid color splash on keypress

// =============================================================================
// Default Settings
// =============================================================================
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

// Default color (HSV: 0-255 each)
// 170 = blue, 0 = red, 85 = green, 128 = cyan
#define RGB_MATRIX_DEFAULT_HUE 170
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 128


#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE