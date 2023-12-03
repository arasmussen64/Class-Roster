#include "student.h"
using namespace std;

// Constructor
Student::Student(string id, string fName, string lName, string email, int a, 
                 int daysInCourse1, int daysInCourse2, int daysInCourse3, 
                 DegreeProgram degProgram) {
    this->studentID = id;
    this->firstName = fName;
    this->lastName = lName;
    this->emailAddress = email;
    this->age = a;
    this->daysToCompleteCourses[0] = daysInCourse1;
    this->daysToCompleteCourses[1] = daysInCourse2;
    this->daysToCompleteCourses[2] = daysInCourse3;
    this->degreeProgram = degProgram;
}

// Accessor implementations
string Student::getStudentID() const { return studentID; }
string Student::getFirstName() const { return firstName; }
string Student::getLastName() const { return lastName; }
string Student::getEmailAddress() const { return emailAddress; }
int Student::getAge() const { return age; }
const int* Student::getDaysToCompleteCourses() const { return daysToCompleteCourses; }
DegreeProgram Student::getDegreeProgram() const { return degreeProgram; }

// Mutator implementations
void Student::setStudentID(string id) { studentID = id; }
void Student::setFirstName(string fName) { firstName = fName; }
void Student::setLastName(string lName) { lastName = lName; }
void Student::setEmailAddress(string email) { emailAddress = email; }
void Student::setAge(int a) { age = a; }
void Student::setDaysToCompleteCourses(int days1, int days2, int days3) {
    daysToCompleteCourses[0] = days1;
    daysToCompleteCourses[1] = days2;
    daysToCompleteCourses[2] = days3;
}
void Student::setDegreeProgram(DegreeProgram degProgram) { degreeProgram = degProgram; }

// print() to print specific student data
void Student::print() const {
    cout << "Student ID: " << studentID << "\t";
    cout << "First Name: " << firstName << "\t";
    cout << "Last Name: " << lastName << "\t";
    cout << "Email Address: " << emailAddress << "\t";
    cout << "Age: " << age << "\t";
    cout << "daysInCourse: {" << daysToCompleteCourses[0] << ", " 
         << daysToCompleteCourses[1] << ", " << daysToCompleteCourses[2] << "} \t";
    cout << "Degree Program: " << degreeProgramToString(degreeProgram) << endl;
}

// Helper function to convert DegreeProgram enum to string
string Student::degreeProgramToString(DegreeProgram dp) const {
    switch (dp) {
        case SECURITY:
            return "SECURITY";
        case NETWORK:
            return "NETWORK";
        case SOFTWARE:
            return "SOFTWARE";
        default:
            return "UNKNOWN";
    }
}
