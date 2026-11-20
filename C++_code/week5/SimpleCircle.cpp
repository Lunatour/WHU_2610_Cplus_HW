#include <iostream>
#define PI 3.14

class SimpleCircle{
        
    private:
        int *itsRadius;
    public:
        SimpleCircle (int r = 0){
            itsRadius = new int(r);
        }

        ~SimpleCircle () {
            delete itsRadius;
        }
        float Area();

        int getRadius() {
            return *itsRadius;
        }

        void setRadius(int r){
            *itsRadius = r;
        }
};

float SimpleCircle::Area() {

    return PI * (*itsRadius) * (*itsRadius);

}

int main() {
    SimpleCircle acircle;
    acircle.setRadius(3);
    std::cout << "acircle's area = " << acircle.Area() << "\n";


}