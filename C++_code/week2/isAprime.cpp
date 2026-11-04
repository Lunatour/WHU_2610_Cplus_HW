#include <iostream>

bool is_a_prime(int n);

int main(){
    int num;
    std::cout << "please input a number: " << "\n";
    std::cin >> num;
    std::cout << std::boolalpha << is_a_prime(num) << "\n";
    return 0;

}

bool is_a_prime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;       
}