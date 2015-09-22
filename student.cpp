#include "student.h"

std::istream& operator>>(std::istream &is, Student &iStudent)
{
    char* name;
    int age;
    std::string ssn;

    is >> name >> age >> ssn;

    iStudent.setName(name);
    iStudent.setAge(age);
    iStudent.setSSN(ssn);

    return is;
}

std::ostream& operator<<(std::ostream &os, Student &oStudent)
{
    os <<   "Name: " << oStudent.getName() << std::endl <<
            "Age: " << oStudent.getAge() << std::endl <<
            "SSN: " << oStudent.getSSN() << std::endl <<
            "GPA: " << oStudent.getGPA();

    return os;
}

// Constructors

Student::Student(char* name, int age, const std::string &ssn, float gpa)
{
    setName(name);
    setAge(age);
    setSSN(ssn);

    m_gpa = gpa;

}

Student& Student::operator=(const Student &Student)
{
    m_gpa = Student.m_gpa;

    return *this;
}

// Accessors and Mutators

void Student::setGPA(float gpa)
{
    m_gpa = gpa;
}

float Student::getGPA()
{
    return m_gpa;
}
