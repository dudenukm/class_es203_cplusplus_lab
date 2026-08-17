#include <iostream>
using namespace std;

int main() {

    int rem, sum=0, prod=1;
    int num = 123;
    int temp = num;

    while (temp!=0) {
        rem = temp % 10;
        sum = sum + rem;
        prod = prod * rem;

        temp = temp / 10;
    }

    std::cout << "Number " << num << "\nSum = " << sum << " Product = " << prod << std::endl;

    if (sum==prod){
        std::cout << "It is an armstrong number";
    } else {
        std::cout << "It is not an armstrong number";
    }

}