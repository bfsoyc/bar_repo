cc_library(
    name = "modb_static",
    srcs = ["b.cc"],
    hdrs = ["b.h"],
    deps = [
        "//lib/module_a:moda",
    ],
    alwayslink = True,
)

cc_binary(
    name = "libmodb.so",
    srcs = ["modb_static"],
    linkshared = True,
    deps = [
        "//lib/module_a:moda",
    ],
)

cc_library(
    name = "modb",
    srcs = ["libmodb.so"],
    hdrs = ["b.h"],
    visibility = ["//visibility:public"],
    deps = [
        "//lib/module_a:moda",
    ],
)
