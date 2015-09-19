#include "student.h"

Student::Student() : m_gpa(0)
{

}

Student::Student(const char *name, int age, const std::string &ssn, float gpa)
{
      setName(name);
      setAge(age);
      setSSN(ssn);
      m_gpa = gpa;
}


