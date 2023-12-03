#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h" // Ensure this includes the DegreeProgram enum

class Student {
private:
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int daysToCompleteCourses[3]; // Array to store the number of days to complete each of the 3 courses
    DegreeProgram degreeProgram;

public:
    // Constructor
    Student(std::string studentID, std::string firstName, std::string lastName,
            std::string emailAddress, int age, int daysInCourse1,
            int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

    // Destructor
    ~Student();

    // Accessors (getters)
    std::string getStudentID() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmailAddress() const;
    int getAge() const;
    const int* getDaysToCompleteCourses() const;
    DegreeProgram getDegreeProgram() const;

    // Mutators (setters)
    void setStudentID(std::string studentID);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setEmailAddress(std::string emailAddress);
    void setAge(int age);
    void setDaysToCompleteCourses(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // print() to print specific student data
    void print() const;
};

#endif // STUDENT_H
