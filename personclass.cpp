#include <iostream>
#include <cstring>
using namespace std;

const int size = 10;

class Person {
    private:
        char name[64];
        int age;
        char address[64];
        float basic_salary;
        float hra;
        float da;
        float total_salary;
    
    public:
        Person() {
            strcpy(name,"N/A");
            age = 0;
            strcpy(address, "N/A");
            basic_salary = 0.0f;
            hra = 0.0f;
            da = 0.0f;
            total_salary = 0.0f;
        }

    Person(const char* n, int a, const char* addr, float basic, float h, float d) {
        strncpy(name, n, 63);
        name[63] = '\0';
        age = a;
        strncpy(address, addr, 63);
        address[63] = '\0';

        basic_salary = basic;
        hra = h;
        da = d;
        total_salary = basic_salary + hra + da;
    }

    int getAge() const {
        return age;
    }

    void displaySalarySlip() const {
        cout << "---------[Salary Slip]--------\n";
        cout << "| Name         : " << name << "\n";
        cout << "| Age          : " << age <<  "\n";
        cout << "| Address      : " << address << "\n";
        cout << "-------------------------------\n";
        cout << "| Basic Salary : " << basic_salary << "\n";
        cout << "| HRA          : " << hra << "\n";
        cout << "| DA           : " << da << "\n";
        cout << "--------------------------------\n";
        cout << "| Total Salary : " << total_salary << "\n":
        cout << "--------------------------------\n";
    } 

    inline void findAge(const Person p[], int size) {
        if (size<=0) return;

        int minAge = p[0].getAge();
        int maxAge = p[0].getAge();

        for (int i=1;i<size;i++){
            if (p[i].getAge() < minAge) {
                minAge = p[i].getAge();
            }
            if (p[i].getAge() > maxAge) {
                maxAge = p[i].getAge();
        }

        cout << "Youngest Person's age : " << minAge << endl;
        cout << "Oldest Peron's age    : " << maxAge << endl;
    }
}

int main() {

    Person p[SIZE];

    p[0] = Person("Arik Sharma", 30, "Salt Lake, Kolkata", 50000);
    p[1] = Person("Riya Das", 38, "Howrah, West Bengal", 45000);
    p[2] = Person("Rahul Roy", 45, "Park Street, Kolkata", 80000);
    p[3] = Person("Sneha Sen", 25, "Dum Dum, Kolkata", 35000);
    p[4] = Person("Arpan Maitra", 22, "Patna, Bihar", 30000);
    p[5] = Person("Priya Ghosh", 28, "Bangalore, KA", 60000);
    p[6] = Person("Vikram Singh", 52, "Ranchi, JH", 100000);
    p[7] = Person("Anik Ghosh", 40, "Barasat, Kolkata", 75000);
    p[8] = Person("Saurav Paul", 35, "Durgapur, WB", 48000);
    p[9] = Person("Aanya De", 29, "Chennai, TN", 52000);

    cout << "Youngest Age: " << findYoungest(p, SIZE) << " years\n";
    cout << "Eldest Age: " << findEldest(p, SIZE) << " years\n\n";

    cout << "=================== SALARY SLIPS ===================\n\n";
    for (int i = 0; i < SIZE; i++) {
        p[i].displaySalarySlip();
    }

    return 0;
}