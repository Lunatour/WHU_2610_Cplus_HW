#include <iostream>

int main(){
    int num;
    int rev = 0;
    std::cout << "please input a intergal: ";
    std::cin >> num;
    int x = num;
    while (x > 0){
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    if (rev == num){
        std::cout << "true";
    }
    else{
        std::cout << "flase";
    }
}