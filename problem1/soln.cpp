#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int marks;  // private attribute

public:
    string name;
    int roll_no;

    // Setter for marks with validation
    void setMarks(int m) {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks, give valid marks only" << endl;
    }

    // Getter for marks
    int getMarks() {
        return marks;
    }

    // Method to input student details
    void inputDetails() {
        cout << "Enter the name of the student: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Enter the roll no of the student: ";
        cin >> roll_no;

        int tempMarks;
        cout << "Enter the marks of the student out of 100: ";
        cin >> tempMarks;
        setMarks(tempMarks); 
    }

  
    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << getMarks() << endl; 
    }
};

int main() {
    Student s1;

    s1.inputDetails();
    s1.displayDetails();

    return 0;
}
