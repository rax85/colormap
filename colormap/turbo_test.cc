#include "colormap/turbo.h"

#include <cstdint>

#include "gtest/gtest.h"

namespace colormap {

TEST(TurboTests, Floats) {
  float r = 0;
  float g = 0;
  float b = 0;

  TurboRgb(-10, -10, 10, r, g, b);
  EXPECT_FLOAT_EQ(r, 0.18995);
  EXPECT_FLOAT_EQ(g, 0.07176);
  EXPECT_FLOAT_EQ(b, 0.23217);

  TurboRgb(10, -10, 10, r, g, b);
  EXPECT_FLOAT_EQ(r, 0.47960);
  EXPECT_FLOAT_EQ(g, 0.01583);
  EXPECT_FLOAT_EQ(b, 0.01055);
}

TEST(TurboTests, Bytes) {
  uint8_t r = 0;
  uint8_t g = 0;
  uint8_t b = 0;

  TurboRgb(-10, -10, 10, r, g, b);
  EXPECT_FLOAT_EQ(r, 48);
  EXPECT_FLOAT_EQ(g, 18);
  EXPECT_FLOAT_EQ(b, 59);

  TurboRgb(10, -10, 10, r, g, b);
  EXPECT_FLOAT_EQ(r, 122);
  EXPECT_FLOAT_EQ(g, 4);
  EXPECT_FLOAT_EQ(b, 3);
}

}