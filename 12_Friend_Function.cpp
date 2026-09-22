#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student() {
        marks = 90;
    }

    friend void displayMarks(Student s);
};

void displayMarks(Student s) {
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s;

    displayMarks(s);

    return 0;
}