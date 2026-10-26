#include <iostream>


long long sigma(int n, int a){
    long long sum = 0;
    long long j = 0;
    for (int i = 1; i <= n; i++){
        j = j * 10 + a;
        sum = sum + j;   //sum 是数列和，j记录了第i项数
    }
    return sum;
}
int main(){
    int n, a;
    std::cout << "please input n and a: " << "\n";
    std::cin >> n  >> a;
    std::cout << sigma(n, a) << "\n";
}