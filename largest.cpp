#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    a = 3;
    b = 4;
    c = 2;

    std::cout << "a = " << a << "\nb = " << b << "\nc = " << c << std::endl;

    if ((a > b) && (a > c)) {
        std::cout << "a is largest";
    } else if ((b > a) && (b > c)) {
        std::cout << "b is the largest";
    } else {
        std::cout << "c is the largest";
    }

    return 0;

}