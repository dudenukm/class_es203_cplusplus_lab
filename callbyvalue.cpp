// call by value 

#include <iostream>
using namespace std;

void swap(int a, int b) {

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swap : x = " << a << " , y = " << b << endl;

}

int main() {

    int x = 40;
    int y = 50;

    std::cout << "before swap : x = " << x << " , y = " << y << endl;

    swap(x, y);
    return 0;
} 