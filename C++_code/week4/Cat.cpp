#include <iostream>

class Cat{
    public:
        int getNumOfCats();
    private:
        int numOfCats = 10;
};

int Cat::getNumOfCats(){
    return numOfCats;
}

int main(){
    Cat Kitty;
    std::cout << Kitty.getNumOfCats();
    
}