#pragma once

#include <cstdint>

namespace colormap {

/**
 * @brief Return the color corresponding to the value from the turbo colormap.
 *
 * @param val The value to map.
 * @param min The minimum range value.
 * @param max The maximum range value.
 * @param r Output red value as a float between 0.0 & 1.0.
 * @param g Output blue value as a float between 0.0 & 1.0.
 * @param b Output green value as a float between 0.0 & 1.0.
 */
void TurboRgb(double val, double min, double max, float& r, float& g, float& b);


/**
 * @brief Return the color corresponding to the value from the turbo colormap.
 *
 * @param val The value to map.
 * @param min The minimum range value.
 * @param max The maximum range value.
 * @param r Output red value as a uint8_t between 0 & 255.
 * @param g Output blue value as a uint8_t between 0 & 255.
 * @param b Output green value as a uint8_t between 0 & 255.
 */
void TurboRgb(double val, double min, double max, uint8_t& r, uint8_t& g, uint8_t& b);

}