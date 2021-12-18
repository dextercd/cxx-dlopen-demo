#include <dlfcn.h>

int main()
{
    auto module = dlopen("./libmodule.so", RTLD_LAZY);

    auto some_call = reinterpret_cast<void(*)()>(dlsym(module, "some_call"));
    auto some_print = reinterpret_cast<void(*)()>(dlsym(module, "some_print"));

    some_print();
    some_call();
    some_print();
}
