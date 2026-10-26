#include <iostream>

int main (){

    int increase[24];
    int num[24] ;
    num[0] = 2;
    num[1] = 2;
    increase[0] = 0;
    increase[1] = 0;
    for (int i = 2; i < 20; i++){
        increase[i] = num[i - 2];
        num[i] = num[i - 1] + increase[i];
        std::cout << num[i] << "\n"; 
        
    }
    for (int i = 0; i < 20; i++){
        std::cout << "the number of rabbits in the " << i+1 <<"th month is " << num[i] << "\n" ;
    }

}