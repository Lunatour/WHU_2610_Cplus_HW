#include <iostream>

int main(){
    double profit, prize; 
    std::cout << "please input profit: ";
    std::cin >> profit;

    if (profit <= 10){
        prize = 0.1 * profit;
    }
    else if (profit <= 20){
        prize = 0.1 * 10 + 0.075 * (profit - 10);
    }
    else if (profit <= 40){
        prize = 0.1 * 10 + 0.075 * 10 + 0.05 * (profit - 20);
    }
    else if (profit <= 60){
        prize = 0.1 * 10 + 0.075 * 10 + 0.05 * 20 + 0.03 * (profit - 40);
    }
    else if (profit <= 100){
        prize = 0.1 * 10 + 0.075 * 10 + 0.05 * 20 + 0.03 * 20 + 0.015 * (profit - 60);
    }
    else {
        prize = 0.1 * 10 + 0.075 * 10 + 0.05 * 20 + 0.03 * 20 + 0.015 * 40 + 0.01 * (profit - 100);
    }

    std::cout << "prize is : " << prize ;

    

}