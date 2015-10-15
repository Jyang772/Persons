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

    std::cout << "Inside assign: " << std::endl << std::flush;
    int length = strlen(iPerson.m_name)+1;
    m_name = new char[length]();
    for(int i=0; i<length; i++)
    {
        m_name[i] = iPerson.m_name[i];
    }
    m_name[length-1] = '\0';

    //m_name = iPerson.m_name;
    m_age = iPerson.m_age;
    m_ssn = iPerson.m_ssn;

    return *this;
}

// Constructors

Person::Person(char* name, int age, const std::string &ssn)
{

    int length = strlen(name)+1; //+1 for null
    m_name = new char[length]();
    for(int i=0; i<length; i++)
    {
        m_name[i] = name[i];
    }
    m_name[length-1] = '\0';

    //m_name = name;
    m_age = age;
    m_ssn = ssn;
}

Person::Person(const Person &p)
{

    int length = strlen(p.m_name)+1; //+1 for null
    m_name = new char[length]();
    for(int i=0; i<length; i++)
    {
        m_name[i] = p.m_name[i];
    }
    m_name[length-1] = '\0';

    //m_name = p.m_name;
    m_age = p.m_age;
    m_ssn = p.m_ssn;
}

Person::~Person()
{

    delete [] m_name;
}

// Accessors and Mutators

void Person::Name(char* name)
{
    m_name = name;
}

char* Person::Name()
{
    return m_name;
}

void Person::setAge(int age)
{
    m_age = age;
}

int Person::getAge() const
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
