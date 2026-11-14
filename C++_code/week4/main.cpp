#include <iostream>
#include "XYZclass.hpp"    //这里大小写要统一吗？

int main(){
    X x;
    Y y;
    Z z;

    std::cout << y.g(&x) << "\n";
    std::cout << z.f(&x) << "\n";
    std::cout << h(&x) << "\n";
    std::cout << x.getI() << "\n";
}