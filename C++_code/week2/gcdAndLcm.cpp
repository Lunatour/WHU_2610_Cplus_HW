#include <iostream>

int gcd (int a, int b);
int lcm (int a, int b);

int main(){
    int a, b;
    std::cout << "please input two number: " << "\n";
    std::cin >> a >> b;
    std::cout << "the greatest common divisor is: "<< gcd(a,b) << "\n";
    std::cout << "the least common multiple is: "<< lcm(a,b) << "\n";
    return 0;

}

int gcd(int a, int b){
    int j = 0;
    for (int i = 1; i <= a && i <= b; i++){
        if (a % i == 0 && b % i == 0){
            j = i;
        }
    }
    return j;
}

int lcm(int a, int b){
    int product = a * b;
    int j = 0;
    for (int i = product; i >= a && i >= b; i--){
        if (i % a == 0 && i % b == 0 ){
            j = i;
        }
    } 
    return j;
}