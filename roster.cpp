#include "roster.h"
#include <iostream>
#include <vector>
#include <regex>

// Constructor
Roster::Roster() {
    // Initialize classRosterArray with nullptr
    for (int i = 0; i < 5; ++i) {
        this->classRosterArray[i] = nullptr;
    }
}

// Destructor
Roster::~Roster() {
    for (int i = 0; i < 5; ++i) {
        delete this->classRosterArray[i];  // Deallocate memory for each student
        this->classRosterArray[i] = nullptr;
    }
}

// Add method
void Roster::add(std::string studentID, std::string firstName, std::string lastName,
    std::string emailAddress, int age, int daysInCourse1,
    int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
            break;
        }
    }
}

// Remove method
void Roster::remove(std::string studentID) {
    bool found = false;
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Error: Student with ID " << studentID << " not found." << std::endl;
    }
}

// PrintAll method
void Roster::printAll() const {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}

// PrintAverageDaysInCourse method
void Roster::printAverageDaysInCourse(std::string studentID) const {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {
            const int* days = classRosterArray[i]->getDaysToComplete();
            std::cout << "Average days in course for student ID " << studentID << ": "
                << (days[0] + days[1] + days[2]) / 3.0 << std::endl;
            break;
        }
    }
}

// PrintInvalidEmails method
void Roster::printInvalidEmails() const {
    std::regex emailPattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr) {
            std::string email = classRosterArray[i]->getEmailAddress();
            if (!std::regex_match(email, emailPattern)) {
                std::cout << "Invalid email: " << email << std::endl;
            }
        }
    }
}

// PrintByDegreeProgram method
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}

std::string Roster::getStudentIDAt(int index) const {
    if (index >= 0 && index < 5 && classRosterArray[index] != nullptr) {
        return classRosterArray[index]->getStudentID();
    }
    else {
        return ""; // Return an empty string if index is out of range or student does not exist
    }
}