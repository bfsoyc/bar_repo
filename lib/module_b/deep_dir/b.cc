#include "lib/module_b/deep_dir/b.h"

#include <iostream>

#include "lib/module_a/a.h"

void FuncB() {
    std::cout << "This is FuncB call.\n";
    return FuncA();
}
