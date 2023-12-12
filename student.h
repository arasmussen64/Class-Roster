#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h" // This includes the DegreeProgram enum

class Student {
private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int daysToComplete[3]; // Array holding number of days to complete each course
    DegreeProgram degreeProgram;

    std::string degreeProgramToString(DegreeProgram degreeProgram) const;

public:
    // Constructors
    Student();
    Student(std::string studentID, std::string firstName, std::string lastName,
        std::string emailAddress, int age, int daysToComplete[],
        DegreeProgram degreeProgram);

    // Destructor
    ~Student();

    // Accessors (getters)
    std::string getStudentID() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmailAddress() const;
    int getAge() const;
    const int* getDaysToComplete() const;
    DegreeProgram getDegreeProgram() const;

    // Mutators (setters)
    void setStudentID(const std::string& studentID);
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setEmailAddress(const std::string& emailAddress);
    void setAge(int age);
    void setDaysToComplete(const int daysToComplete[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // Print student data
    void print() const;
};

#endif
