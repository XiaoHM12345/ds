#include <iostream>
#include "arrayList.h"
#include "A.h"
int main() {
    arrayList<int> list1;
    list1.insert(0, 3);
    list1.insert(0, 2);
    list1.insert(0, 1);
    list1.insert(0, 0);
    list1.output(std::cout);
    std::cout << '\n';
    std::cout << list1.get(3);
    list1.erase(2);
    list1.output(std::cout);
    std::cout << "\n";
    std::cout << list1.get(3);
    A a(1);
    A b(2);
    a = b;

    return 0;
}
