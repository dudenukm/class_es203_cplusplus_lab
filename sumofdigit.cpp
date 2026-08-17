#include <iostream>
using namespace std;

int main() {

    int num = 123, sum=0, rem;
    int temp = num;

    while (num!=0){
        rem = num % 10;
        sum = sum + rem;
        num /= 10;
    }

    
    std::cout << "Sum of the number " << temp << "=" << sum << std::endl;
    return 0;
}
