#pragma once
#include<string>;
using namespace std;


class Student {
    private:
        int studentID;
        string firstName;
        string lastName;
        string email;
        int age;
        int daysToCompleteCourse;
        string degreeProgram;

    public:

    //Constructor
       Student(int studentID, string firstName, string lastName, string email, int age, int daysToCompleteCourse, string degreeProgram) 
        : studentID(studentID), firstName(firstName), lastName(lastName), email(email), age(age), daysToCompleteCourse(daysToCompleteCourse), degreeProgram(degreeProgram) {}
    
    //Getters
        int getStudentID() const { return studentID; }
        string getFirstName() const { return firstName; }
        string getLastName() const { return lastName; }
        string getEmail() const { return email; }
        int getAge() const { return age; }
        int getDaysToCompleteCourse() const { return daysToCompleteCourse; }
        string getDegreeProgram() const { return degreeProgram; }

    // Setters
        void setStudentID(int value) { studentID = value; }
        void setFirstName(string value) { firstName = value; }
        void setLastName(string value) { lastName = value; }
        void setEmail(string value) { email = value; }
        void setAge(int value) { age = value; }
        void setDaysToCompleteCourse(int value) { daysToCompleteCourse = value; }
        void setDegreeProgram(string value) { degreeProgram = value; }

     // Print function
        void print() const {
            cout << "Student ID: " << studentID << "\n"
                << "First Name: " << firstName << "\n"
                << "Last Name: " << lastName << "\n"
                << "Email: " << email << "\n"
                << "Age: " << age << "\n"
                << "Days to Complete Course: " << daysToCompleteCourse << "\n"
                << "Degree Program: " << degreeProgram << endl;
    }


};
