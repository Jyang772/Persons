//--------------------------------------------------------------------------------------------
// CheckOutFacultyClass.cpp
//--------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "faculty.h"

void CheckOutFacultyClass()
{
    //Testing Constructors
    std::cout << "Testing Constructors: \n\n";

    std::string *degrees = new std::string[3]{"physics","computer science","mathematics"};
    Faculty driver("Richard Stallman",62,"444-44-4444",3,degrees);

    std::cout << "\n\tFaculty driver(\"Richard Stallman\",62,\"444-44-4444\",3,degrees)\n\n";
    std::cout << driver << std::endl;

    std::cout << "\n\nCopy Constructor: \n\n";
    std::cout << "\n\tPerson test(driver)\n\n";

    Faculty test(driver);
    std::cout << "After std::cout << test << std::endl;\n\n";
    std::cout << test << std::endl;

    //Test Assignment Operator
    std::cout << "Testing Assignment Operator: \n\n";

    Faculty P2("CHR",23,"233-323-232",3,degrees);
    P2 = driver;
    std::cout << "\n\tPerson P2(\"CHR\",23,\"233-323-232\")";
    std::cout << "\n\tP2 = driver\n\n";

    std::cout << "P2 After: \n\n";

    std::cout << P2 << std::endl;


}
