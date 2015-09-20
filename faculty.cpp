#include "faculty.h"

std::istream& operator>>(std::istream &is, Faculty &iFaculty)
{
    //

    return is;
}

std::ostream& operator<<(std::ostream &os, Faculty &oFaculty)
{
    os <<   "Name: " << oFaculty.getName() << std::endl <<
            "Age: " << oFaculty.getAge() << std::endl <<
            "SSN: " << oFaculty.getSSN() << std::endl <<
            "Degree Count: " << oFaculty.getNumberOfDegrees() << std::endl;
            // "Degrees: " << endl;

    return os;
}

// Constructors

Faculty::Faculty(char* name, int age, const std::string &ssn, int numberOfDegrees, const std::string* degrees)
{
    setName(name);
    setAge(age);
    setSSN(ssn);

    // Degrees
    m_numberOfDegrees = 0;
    m_degrees = new std::string[3];
}

// Accessors and Mutators

int Faculty::getNumberOfDegrees()
{
    return m_numberOfDegrees;
}

void Faculty::addDegree(std::string degree)
{
   m_degrees[m_numberOfDegrees-1] = degree;
}

Faculty::~Faculty()
{
    delete m_degrees;
}
