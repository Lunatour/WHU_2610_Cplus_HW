//9 * 9乘法表
// i * j i是列数，j是行数
#include <iostream>

int main(){
    for (int j = 1; j <= 9; j++){
        for (int i = 1; i <= j; i++){
            int a = i * j;
            std::cout << i <<"*" << j <<"=" <<a <<"  ";
        }
        std::cout <<"\n";
    }
}