#include "roster.h"
#include <iostream>
#include <sstream>

using namespace std;


Roster::Roster() {
    // Initialize all elements of classRosterArray to nullptr
    for (int i = 0; i < 5; ++i) {
        classRosterArray[i] = nullptr;
    }
}

Roster::~Roster() {
    // Delete all dynamically allocated Student objects
    for (int i = 0; i < 5; ++i) {
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
}

void Roster::add(const std::string& studentID, const std::string& firstName, const std::string& lastName,
                 const std::string& emailAddress, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    // Create a new Student object using new and store the address in the array
    // Assume that the Student class has a constructor that matches these parameters
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age,
                                              daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
            break;
        }
    }
}

void Roster::remove(const std::string& studentID) {
    // Implement logic to remove a student by studentID
    // If studentID is not found, print an error message
}

void Roster::printAll() const {
    // Loop through classRosterArray and call the print() method for each student
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(const std::string& studentID) const {
    // Implement logic to print the average number of days in the three courses
    // for the student identified by studentID
}

void Roster::printInvalidEmails() const {
    // Verify student email addresses and display all invalid email addresses
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    // Print out student information for a degree program specified by an enumerated type
}

// Additional functions as per your requirement


