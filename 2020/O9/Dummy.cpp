#include "Dummy.h"


void dummyTest() {

    Dummy a;
    *a.num = 4;

    Dummy b{a};
    Dummy c;
    c = a;

    std::cout << "a: " << *a.num << '\n';
    std::cout << "b: " << *b.num << '\n';
    std::cout << "c: " << *c.num << '\n';

    std::cin.get();
}