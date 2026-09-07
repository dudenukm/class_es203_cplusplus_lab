#include <iostream>
using namespace std;

class shapes {
    private:
        double radius;
        double length;
        double width;

    public:
        shapes(double r, double l, double w) {
            radius = r;
            length = l;
            width = w;
            cout << "Shapes object created." << endl;
        } 
    
    double cal_cirle_peri() {
        return 2*3.14159*radius;

    }

    double cal_rectangel_peri(){
        return 2*(length+width);
    }

    ~shapes() {
        cout << "shape object destroyed" << endl;
    }
};

int main() {

    shapes shape(10.5,3.5,4.0);
    cout << "Perimeter of circle : " << shape.cal_cirle_peri() << endl;
    cout << "Perimenter of rectangle : " << shape.cal_rectangel_peri() << endl;

    return 0;
}
