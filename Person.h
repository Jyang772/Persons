/*
class Person
{
//Private member data for:
//    1. m_name: name of the person (char *).
//    2. m_age: age of the person (int).
//    3. m_ssn: social security number of the person
//              (string for now: ddd-dd-dddd).
//Public functions:
//    1. Person(), Person(const char * name, int age, const string &ssn),
//       Person(const Person &p)
//    2. Destructor.
//    3. Overloaded assignment operator.
//    4. As discussed in class, provide "accessor" and "mutator" functions for
//       each of the member data items in the class.
//    5. Overloaded input and output operators.
};*/

#include <string>
#include <ostream>
#include <iostream>

class Person
{

    friend std::ostream & operator<< (std::ostream &os,const Person &p);
    friend std::istream & operator>> (std::istream &is, Person &p);
public:
	Person();
	Person(const char* name, int age, const std::string &ssn);
    ~Person();

	void getName();
private:
    const char *m_name;
	int m_age;
	std::string m_ssn;
};

