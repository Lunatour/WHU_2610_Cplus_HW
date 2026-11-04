#include <iostream>
int f(int a, int b);

int main(){
    int a, b;
        std::cout << "please input two prameters: " << "\n";
        std::cin >> a >> b;
        std::cout << f(a, b) << "\n";
        return 0;
}
int f(int a, int b){
    if (b == 0){
        return -1;
    }
    else {
        return a/b;
    }
}