#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

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
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basic_salary = 0.0f;
        hra = 0.0f;
        da = 0.0f;
        total_salary = 0.0f;
    }

    Person(const char* n, int a, const char* addr, float total_sal) {
        strncpy(name, n, 63);
        name[63] = '\0';
        age = a;
        strncpy(address, addr, 63);
        address[63] = '\0';

        total_salary = total_sal;
        basic_salary = total_salary * 0.60f;
        hra = total_salary * 0.25f;
        da = total_salary * 0.15f;
    }


    int getAge() const {
        return age;
    }

    void displaySalarySlip() const {
        cout << "--------------------------------------------------\n";
        cout << left << setw(20) << "Name" << ": " << name << "\n";
        cout << left << setw(20) << "Age" << ": " << age << "\n";
        cout << left << setw(20) << "Address" << ": " << address << "\n";
        cout << "--------------------------------------------------\n";
        cout << left << setw(20) << "BASIC SALARY" << ": " << fixed << setprecision(2) << basic_salary << "\n";
        cout << left << setw(20) << "HRA" << ": " << hra << "\n";
        cout << left << setw(20) << "DA" << ": " << da << "\n";
        cout << "--------------------------------------------------\n";
        cout << left << setw(20) << "NET (TOTAL) SALARY" << ": " << right << setw(10) << total_salary << "\n";
        cout << "--------------------------------------------------\n\n";
    }
};


inline int findYoungest(const Person p[], int size) {
    int minAge = p[0].getAge();
    for (int i = 1; i < size; i++) {
        if (p[i].getAge() < minAge) {
            minAge = p[i].getAge();
        }
    }
    return minAge;
}

inline int findEldest(const Person p[], int size) {
    int maxAge = p[0].getAge();
    for (int i = 1; i < size; i++) {
        if (p[i].getAge() > maxAge) {
            maxAge = p[i].getAge();
        }
    }
    return maxAge;
}

int main() {
    const int SIZE = 10;

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

