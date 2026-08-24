// call by reference

#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int x = 5;
    int y = 10;

    cout << "Before swap : x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swap : x = " << x << ", y = " << y << endl;

    return 0;
}