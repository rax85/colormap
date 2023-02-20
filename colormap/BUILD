cc_library(
  name = "turbo",
  srcs = ["turbo.cc"],
  hdrs = ["turbo.h"],
  visibility = ["//visibility:public"],
)

cc_test(
  name = "turbo_test",
  srcs = ["turbo_test.cc"],
  deps = [
    ":turbo",
    "@com_google_googletest//:gtest_main",
  ]
)