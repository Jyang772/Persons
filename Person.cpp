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

void Person::getName()
{
	std::cout << m_name << "\n";
}

Person::~Person()
{

	delete [] m_name;
}


std::ostream& operator<<(std::ostream& os, const Person &p)
{
    std::cout << "Person name: " << p.m_name << "\n";
    std::cout << "Age: " << p.m_age << "\n";
    std::cout << "Social Security: " << p.m_ssn << "\n";
}

std::istream& operator>>(std::istream& is, Person &p)
{
    //std::cout << "Person's name: ";
    //std::cin >> p.m_name;
    std::cout << p.m_name << "'s age: ";
    std::cin >> p.m_age;
    std::cout << p.m_name << "'s SSN: ";
    std::cin >> p.m_ssn;
}
