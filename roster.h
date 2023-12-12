#pragma once
#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"

class Roster {
private:
    Student* classRosterArray[5]; // Assuming a fixed size for simplicity; you can also use dynamic allocation if needed.

public:
    // Constructor
    Roster();

    // Destructor
    ~Roster();

    // Public member functions
    void add(std::string studentID, std::string firstName, std::string lastName,
        std::string emailAddress, int age, int daysInCourse1,
        int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);

    void remove(std::string studentID);

    void printAll() const;

    void printAverageDaysInCourse(std::string studentID) const;

    void printInvalidEmails() const;

    void printByDegreeProgram(DegreeProgram degreeProgram) const;

    std::string getStudentIDAt(int index) const;

};

#endif
