#include <iostream>
#include <string>     //string 和cctype是什么？
#include <cctype>

int CalculateCharsNumber(const std::string& sentence){           //怎么理解const std::string& sentence参数？
    int count = 0;
    for (char ch : sentence) {
        if (std::isalpha(static_cast<unsigned char>(ch) ) ) {   //static_cast和<unsigned char>是什么意思？
            count++;
        }

    }
    return count;

}

int main( ) {
    std::string sentence;

    std::cout << "Please enter an English sentence: " ;
    std::getline(std::cin, sentence);                              //getline的用法是什么？

    int letters = CalculateCharsNumber(sentence);

    std::cout << "Sentence: " <<sentence << "\n";
    std::cout << "Numbers of letters: " << letters << "\n";

}