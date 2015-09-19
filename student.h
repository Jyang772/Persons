#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
//class Student : public Person
//{
//    //Private member data:
//    //    1. m_gpa: grade point average (float).
//    //Public functions:
//    //    1. Student(), Student(const char * name, int age, const string &ssn,
//    //       float gpa), Student(const Student &s)
//    //    2. As discussed in class, provide "accessor" and "mutator" functions for
//    //       each of the member data items in the class.
//    //    3. Overload the input and output operators for the class.


class Student : public Person
{

public:
    Student();
    Student(const char * name, int age, const std::string &ssn, float gpa);
    Student(const Student &s); //Copy constructor

private:
    float m_gpa;
};

#endif // STUDENT_H
