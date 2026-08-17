#include <iostream>
using namespace std;

int main() {

    int num = 5, fact = 1;

    for (int i=1;i <=num ;++i){
        fact = fact * i;
    }
    
    std::cout << "Factorial of the number " << num << "=" << fact << std::endl;
    return 0;
}
