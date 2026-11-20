#include <iostream>


void reverseHelper(std::string &s, int left, int right);

void reverse(std::string &s) {

    reverseHelper(s, 0, s.size()-1 );

}

void reverseHelper(std::string &s, int left, int right){
    if (left >= right){
        return ;
    }
    std::swap(s[left], s[right]);
    
    reverseHelper(s, left + 1, right - 1);

}

int main() {
    std::string astring;

    std::cout << "Please enter a string: " ;
    std::getline(std::cin, astring);
    reverse(astring);
    std::cout << astring << "\n";
}