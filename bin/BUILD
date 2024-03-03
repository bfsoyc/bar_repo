load("@rules_pkg//:pkg.bzl", "pkg_tar")

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    linkstatic = False,
    deps = [
        "//lib/module_b/deep_dir:modb",
    ],
)

pkg_tar(
    name = "deploy",
    srcs = ["main"],
    include_runfiles = True,
    strip_prefix = "/",
)
