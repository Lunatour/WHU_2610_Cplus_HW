#include <iostream>

int fibo(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    for (int i = 1; i<=10; i++){
        std::cout<<fibo(i)<<" ";
    }

}
