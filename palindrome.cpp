#include <iostream>
using namespace std;

int main() {

    int rem, sum=0;
    int num = 121;
    int temp = num;

    for (int i = 0;i<=3;i++) {
        rem = temp % 10;
        rem = rem*10 + temp;
        temp /= 10;
        
    }
    std::cout << "rev = " << rem << " num = " << num << std::endl;

    return 0;

}