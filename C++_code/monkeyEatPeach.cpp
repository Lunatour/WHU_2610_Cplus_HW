#include <iostream>

int main() {
    int peach[10];
    peach[9] = 1;
    for (int i = 8; i >= 0; i--){
        peach[i] = (peach[i + 1] + 1) * 2;
        std::cout << peach[i] << "\n";
    }
    std::cout << peach[0] << "\n";
}