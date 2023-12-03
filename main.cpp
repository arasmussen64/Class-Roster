#include <iostream>
#include "roster.h"

using namespace std;

int main() {
    // Array of student data
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,[firstname],[lastname],[emailaddress],[age],[numberofdaystocomplete3courses],SOFTWARE"
    };

    // Create an instance of Roster
    Roster classRoster;

    // Parse the studentData array and add each student to the roster
    for (const string& data : studentData) {
        // Split 'data' and extract student information
        // Add student to the classRoster using classRoster.add(...)
    }

    
    cout << "Course Title: Scripting and Programming - Applications - C867\n";
    cout << "Programming Language Used: C++\n";
    cout << "Student ID: 001248931\n";
    cout << "Student Name: Alex Rasmussen\n";

    // Demonstrate other functionalities
    classRoster.printAll();
    classRoster.printInvalidEmails();

    // Loop through classRosterArray and print average days in course
    for (int i = 0; i < 5; ++i) {
        classRoster.printAverageDaysInCourse(studentID);
    }

    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}
