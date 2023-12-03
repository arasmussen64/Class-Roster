#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
#include <string>

class Roster {
private:
    // Assuming a maximum of 5 students for simplicity; adjust as needed.
    Student* classRosterArray[5];

public:
    Roster(); // Constructor
    ~Roster(); // Destructor

    // Member functions as described in your requirements.
    void add(const std::string& studentID, const std::string& firstName, const std::string& lastName,
             const std::string& emailAddress, int age, int daysInCourse1,
             int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(const std::string& studentID);
    void printAll() const;
    void printAverageDaysInCourse(const std::string& studentID) const;
    void printInvalidEmails() const;
    void printByDegreeProgram(DegreeProgram degreeProgram) const;

    // Utility function to find a student by ID and return the index in the array
    int findStudentByID(const std::string& studentID) const;
};

#endif // ROSTER_H
