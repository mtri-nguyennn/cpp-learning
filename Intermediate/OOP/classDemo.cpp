#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
    // Constructor
    Student(string studentName, int studentAge, double studentGpa) {
        name = studentName;
        age = studentAge;
        gpa = studentGpa;
    }

    // Member function to display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    // Member function to update GPA
    void updateGpa(double newGpa) {
        if (newGpa >= 0.0 && newGpa <= 4.0) {
            gpa = newGpa;
            cout << "GPA updated successfully." << endl;
        } else {
            cout << "Invalid GPA. GPA must be between 0.0 and 4.0." << endl;
        }
    }

    // Member function to check pass/fail
    bool hasPassed() {
        return gpa >= 2.0;
    }

    // Getter function
    string getName() {
        return name;
    }
};

int main() {
    cout << "=== Class and OOP Basic Demo ===" << endl;

    // Create objects from the Student class
    Student student1("Anna", 18, 3.8);
    Student student2("John", 19, 1.7);

    cout << "\nStudent 1 Information:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();

    // Check if students passed
    cout << "\nPass/Fail Check:" << endl;

    if (student1.hasPassed()) {
        cout << student1.getName() << " passed." << endl;
    } else {
        cout << student1.getName() << " failed." << endl;
    }

    if (student2.hasPassed()) {
        cout << student2.getName() << " passed." << endl;
    } else {
        cout << student2.getName() << " failed." << endl;
    }

    // Update GPA
    cout << "\nUpdating John's GPA..." << endl;
    student2.updateGpa(2.5);

    cout << "\nStudent 2 Information After Update:" << endl;
    student2.displayInfo();

    // Store objects in a vector
    cout << "\nVector of Student Objects:" << endl;

    vector<Student> students;

    students.push_back(student1);
    students.push_back(student2);
    students.push_back(Student("David", 20, 3.2));

    for (Student s : students) {
        cout << "\nStudent:" << endl;
        s.displayInfo();
    }

    cout << "\n=== End of Class and OOP Demo ===" << endl;

    return 0;
}