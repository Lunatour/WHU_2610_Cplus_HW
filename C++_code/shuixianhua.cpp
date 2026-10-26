#include <iostream>

int main(){
    for (int i = 100; i <= 999; i++){
        int a = (i % 10);
        int b = ((i / 10) % 10);
        int c = (i / 100);
        if (i == a*a*a +b*b*b + c*c*c ){
            std::cout << i <<"\n";
        }
    }
}

//write a function
// bool isNarcissistic(int n) {
//     int sum = 0;
//     for (int x = n; x != 0; x /= 10) {
//         int d = x % 10;
//         sum += d * d * d;
//     }
//     return sum == n;
// }
// int main() {
//     for (int i = 100; i <= 999; ++i){
//         if (isNarcissistic(i)){
//             std::cout << i << "\n";   //注意加上<< "\n"来换行
//             }

//     }
// }