#include <iostream>
#include <string>
using namespace std;

class student {
    protected:
        int roll;
        string name;

    public:
        void inputStudent() {
            cout << "Enter Roll Number: ";
            cin >> roll;
            cin.ignore();
            cout << "Enter Name : ";
            getline(cin, name);
        }

        void displayStudent() {
            cout << "Name : " << name << endl;
            cout << "Roll no : " << roll << endl;
        }
};

class exam : public student {
    protected:
        float marks[6];
    
    public:
        void getMarks() {
            inputStudent();
            cout << "Enter Marks for 6 subjects\n";
            for(int i=0;i<6;i++){
                cout << "Subject " << (i+1) << ": ";
                cin >> marks[i];
            } 
        }

        void displayMarks() const {
            cout << "Marks : ";
            for(int i=0;i<6;i++) {
                cout << marks[i] << (i==5? "" : ",");
            }
            cout << endl;
        }
};

class result : public exam {
    private:
        float total_marks, percentage;
    
    public:
        void calculate_result() {
            total_marks = 0;
            for(int i=0;i<6;i++) {
                total_marks += marks[i];
            }
            percentage = total_marks/6.0;
        }

        void display() {
            displayStudent();
            displayMarks();

            cout << "Total :" << total_marks << "/600" << endl;
            cout << "Percentage : " << percentage << "%" << endl;
        }
};

int main() {

    result studentresult;

    studentresult.getMarks();
    studentresult.calculate_result();

    studentresult.display();
}