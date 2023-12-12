#include "student.h"
#include <iostream>
#include <cassert>

// Default Constructor
Student::Student() {
    // Initialize with default values
    this->studentID = ""; // An empty string for studentID
    this->firstName = ""; // An empty string for firstName
    this->lastName = ""; // An empty string for lastName
    this->emailAddress = ""; // An empty string for emailAddress
    this->age = 0; // A default age, e.g., 0
    for (int i = 0; i < 3; ++i) {
        this->daysToComplete[i] = 0; // Initialize all elements to 0
    }
    this->degreeProgram = SOFTWARE; // Default to one of the DegreeProgram enums, e.g., SOFTWARE
}


// Parameterized Constructor using Member Initializer List
Student::Student(std::string studentID, std::string firstName, std::string lastName,
    std::string emailAddress, int age, int daysToComplete[],
    DegreeProgram degreeProgram)
    : studentID(studentID), firstName(firstName), lastName(lastName),
    emailAddress(emailAddress), age(age), degreeProgram(degreeProgram) {
    for (int i = 0; i < 3; i++) {
        this->daysToComplete[i] = daysToComplete[i];
    }
}

// Destructor
Student::~Student() {
    // Implement as needed
}

// Accessors (Getters)
std::string Student::getStudentID() const {
    return studentID;
}

std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

std::string Student::getEmailAddress() const {
    return emailAddress;
}

int Student::getAge() const {
    return age;
}

// Returns a pointer to the array of days to complete each course
const int* Student::getDaysToComplete() const {
    return daysToComplete;
}

DegreeProgram Student::getDegreeProgram() const {
    return degreeProgram;
}

// Mutators (Setters)

void Student::setStudentID(const std::string& studentID) {
    this->studentID = studentID;
}

void Student::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Student::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(const std::string& emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysToComplete(const int daysToComplete[])
{
}


void Student::setDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}

std::string Student::degreeProgramToString(DegreeProgram degreeProgram) const {
    switch (degreeProgram) {
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

// Revised Print Function
void Student::print() const {
    std::cout << "Student ID: " << studentID << "\t"
        << "First Name: " << firstName << "\t"
        << "Last Name: " << lastName << "\t"
        << "Email Address: " << emailAddress << "\t"
        << "Age: " << age << "\t"
        << "Days in Course: {" << daysToComplete[0] << ", "
        << daysToComplete[1] << ", " << daysToComplete[2] << "} \t"
        << "Degree Program: " << degreeProgramToString(degreeProgram) << std::endl;
}


