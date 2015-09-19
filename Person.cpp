#include "Person.h"

Person::Person()
{
}

Person::Person(const char* name, int age, const std::string &ssn){

	std::cout << "Person constructor called.\n";
	std::cout << name << "\n";
	
	m_name = name;
	m_age = age;
	m_ssn = ssn;
}

std::string Person::getName()
{
    return m_name;
}

std::string Person::getSSN()
{
    return m_ssn;
}

int Person::getAge()
{
    return m_age;
}

void Person::setName(const char* name)
{
    m_name = name;

}

void Person::setSSN(const std::string &ssn)
{
    m_ssn = ssn;
}

void Person::setAge(int age)
{
    m_age = age;
}


Person::~Person()
{


}


std::ostream& operator<<(std::ostream& os, const Person &p)
{
    os << "Person name: " << p.m_name << "\n";
    os << "Age: " << p.m_age << "\n";
    os << "Social Security: " << p.m_ssn << "\n";

    return os;
}

std::istream& operator>>(std::istream& is, Person &p)
{
    //std::cout << "Person's name: ";
    //std::cin >> p.m_name;
    std::cout << p.m_name << "'s age: ";
    is >> p.m_age;
    std::cout << p.m_name << "'s SSN: ";
    is >> p.m_ssn;

    return is;
}
