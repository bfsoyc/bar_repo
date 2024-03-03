cc_library(
    name = "moda_static",
    srcs = ["a.cc"],
    hdrs = ["a.h"],
    alwayslink = True,
)

cc_binary(
    name = "libmoda.so",
    srcs = ["moda_static"],
    linkshared = True,
    linkstatic = False,
)

cc_library(
    name = "moda",
    srcs = ["libmoda.so"],
    hdrs = ["a.h"],
    visibility = ["//visibility:public"],
)
