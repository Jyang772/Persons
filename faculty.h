#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
#include <vector>

class Faculty : public Person
{
    friend std::istream& operator>>(std::istream&, Faculty&);
    friend std::ostream& operator<<(std::ostream&, Faculty&);
private:
    int m_numberOfDegrees;
    std::string* m_degrees; //(string pointer to array of strings containing the degrees)
public:
    Faculty() = default;
    Faculty(char*, int, const std::string&, int, const std::string*);
    Faculty(const Faculty &f);
    ~Faculty();
    int getNumberOfDegrees();
    void addDegree(std::string);
    std::string* getDegrees();
    Faculty& operator=(const Faculty&);
};
#endif // FACULTY_H
