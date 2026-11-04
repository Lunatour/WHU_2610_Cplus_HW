#include <iostream>
int getPowerInt(int x, int y){
    if (y < 0){
        return 0;
    }
    if (y == 1){
        return x;
    }
    return x * getPowerInt(x, y - 1);
}
double getPowerFloat(double x, int y){
    if (y == 1){
        return x;
    }
    if (y < 0){
        return (1/x) * getPowerFloat(x, y + 1);
    }
    if (y > 0){
        return x * getPowerFloat(x, y - 1);
    }
}

int main(){
    int a;
    double b;
    int m;
    std::cout << "please input two numbers,the first is intergal and another is float: " << "\n";
    std::cin >> a >> b;
    std::cout << "please input the exponment number: " <<"\n";
    std::cin >> m;
    std::cout << getPowerInt(a, m) << "\n";
    std::cout << getPowerFloat(b, m) << "\n";
    return 0;
}