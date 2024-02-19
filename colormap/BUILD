cc_library(
  name = "turbo",
  srcs = ["turbo.cc"],
  hdrs = ["turbo.h"],
  visibility = ["//visibility:public"],
  deps = [
    "@com_github_google_glog//:glog",
  ]
)

cc_test(
  name = "turbo_test",
  srcs = ["turbo_test.cc"],
  deps = [
    ":turbo",
    "@com_google_googletest//:gtest_main",
  ]
)