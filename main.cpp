#include <iostream>
#include <sstream>
#include "roster.h"

int main() {
    // Displaying course title, programming language, student ID, and name
    std::cout << "Course Title: Scripting and Programming - Applications - C867" << std::endl;
    std::cout << "Programming Language Used: C++" << std::endl;
    std::cout << "Student ID: 001248931" << std::endl;
    std::cout << "Student Name: Alex Rasmussen" << std::endl;

    // Student data
    const std::string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Alex,Rasmussen,arasm46@wgu.edu,32,30,35,40,SOFTWARE"
    };

    // Create an instance of the Roster class
    Roster classRoster;

    // Add each student to the roster
    for (int i = 0; i < 5; ++i) {
        std::string input = studentData[i];
        std::istringstream ss(input);
        std::string token;

        std::string studentID, firstName, lastName, emailAddress;
        int age, daysInCourse1, daysInCourse2, daysInCourse3;
        DegreeProgram degreeProgram;

        // Parse the string and extract each piece of data
        std::getline(ss, studentID, ',');
        std::getline(ss, firstName, ',');
        std::getline(ss, lastName, ',');
        std::getline(ss, emailAddress, ',');
        ss >> age;
        ss.ignore(); // Ignore the comma
        ss >> daysInCourse1;
        ss.ignore(); // Ignore the comma
        ss >> daysInCourse2;
        ss.ignore(); // Ignore the comma
        ss >> daysInCourse3;
        ss.ignore(); // Ignore the comma

        // Convert degree program from string to enum
        std::string degreeProgramStr;
        std::getline(ss, degreeProgramStr, ',');
        if (degreeProgramStr == "SECURITY") {
            degreeProgram = SECURITY;
        }
        else if (degreeProgramStr == "NETWORK") {
            degreeProgram = NETWORK;
        }
        else if (degreeProgramStr == "SOFTWARE") {
            degreeProgram = SOFTWARE;
        }

        // Add the student to the roster
        classRoster.add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    }


    // Demonstrate functionalities
    classRoster.printAll();
    classRoster.printInvalidEmails();

    // Loop through classRosterArray and print average days in course
    for (int i = 0; i < 5; ++i) {
        std::string studentID = classRoster.getStudentIDAt(i);
        if (!studentID.empty()) {
            classRoster.printAverageDaysInCourse(studentID);
        }
    }

    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3"); // Expected: print a message saying student not found

    // Destructor will be called implicitly for classRoster as it goes out of scope
    return 0;
}