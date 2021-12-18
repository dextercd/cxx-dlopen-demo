#include <string>
#include <iostream>

std::string foo = "bar";

extern "C"
void some_call() {
    foo = "foobar";
}

extern "C"
void some_print() {
    std::cout << foo << '\n';
}
