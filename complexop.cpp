#include <iostream>
using namespace std;

class complex {
    private:
        float real;
        float imag;

    public:
        complex(float r = 0, float i=0) {
            real = r;
            imag = i;
        }

        void operator++() {
            real++;
            imag++;
        }

        void operator--() {
            real--;
            imag--;
        }

        complex operator+(complex c) {
            complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;

            return temp;
        }

        complex operator-(complex c) {
            complex temp;
            temp.real = real - c.real;
            temp.imag = imag - c.imag;

            return temp;
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    complex c1(5.0, 3.0), c2(2.0, 1.0);

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    ++c1;
    cout << "After ++c1 : ";
    c1.display();

    --c2;
    cout << "After --c2 : ";
    c2.display();

    complex sum  = c1 + c2;
    complex diff = c1 - c2;

    cout << "Sum = ";
    sum.display();
    cout << "Diff = ";
    diff.display();

}