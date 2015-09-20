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
    friend std::istream& operator>>(std::istream&, Student&);
    friend std::ostream& operator<<(std::ostream&, Student&);
private:
    float m_gpa;
public:
    Student() = default;
    Student(char*, int, const std::string&, float);
    Student(const Student&);
    void setGPA(float);
    float getGPA();
    Student& operator=(const Student&);
};

#endif // STUDENT_H
