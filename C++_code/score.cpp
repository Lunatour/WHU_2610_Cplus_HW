#include <iostream>

int main(){
    int score;
    std::cout << "please give a movie score: ";
    std::cin >> score;
    if (score == 10 || score == 9) {
        std::cout << "classic";
    }
    if (score == 8 || score == 7) {
        std::cout << "very good";
    }
    if (score == 6 || score == 5) {
        std::cout << "normal";
    }
    if (score < 5 ) {
        std::cout << "bad";
    }
}