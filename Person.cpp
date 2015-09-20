#include "Person.h"

std::istream& operator>>(std::istream &is, Person &iPerson)
{
    is >> iPerson.m_name >> iPerson.m_age >> iPerson.m_ssn;

    return is;
}

std::ostream& operator<<(std::ostream &os, Person &oPerson)
{
    os <<   "Name: " << oPerson.m_name << std::endl <<
            "Age: " << oPerson.m_age << std::endl <<
            "SSN: " << oPerson.m_ssn;

    return os;
}

Person& Person::operator=(const Person &iPerson)
{
    m_name = iPerson.m_name;
    m_age = iPerson.m_age;
    m_ssn = iPerson.m_ssn;

    return *this;
}

// Constructors

Person::Person(char* name, int age, const std::string &ssn)
{
    m_name = name;
    m_age = age;
    m_ssn = ssn;
}

Person::Person(const Person &p)
{
    m_name = p.m_name;
    m_age = p.m_age;
    m_ssn = p.m_ssn;
}

Person::~Person()
{

}

// Accessors and Mutators

void Person::setName(char* name)
{
    m_name = name;
}

char* Person::getName()
{
    return m_name;
}

void Person::setAge(int age)
{
    m_age = age;
}

int Person::getAge()
{
    return m_age;
}

void Person::setSSN(std::string ssn)
{
    m_ssn = ssn;
}

std::string Person::getSSN()
{
    return m_ssn;
}
