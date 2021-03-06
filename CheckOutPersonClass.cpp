//--------------------------------------------------------------------------------------------
// CheckOutPersonClass.cpp
//--------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "Person.h"


void CheckOutPersonClass()
{
    //Testing Constructors
    std::cout << "Testing Constructors: \n\n";

    Person driver("Richard Stallman",62,"444-44-4444");
    std::cout << "\n\tPerson driver(\"Richard Stallman\",62,\"444-44-4444\")\n\n";
    std::cout << driver << std::endl;

    std::cout << "\n\nCopy Constructor: \n\n";
    std::cout << "\n\tPerson test(driver)\n\n";

    Person test(driver);
    std::cout << "After std::cout << test << std::endl;\n\n";
    std::cout << test << std::endl;

    //Test Assignment Operator
    std::cout << "Testing Assignment Operator: \n\n";

    Person P2("CHR",23,"233-323-232");
    P2 = driver;
    std::cout << "\n\tPerson P2(\"CHR\",23,\"233-323-232\")";
    std::cout << "\n\tP2 = driver\n\n";

    std::cout << "P2 After: \n\n";

    std::cout << P2 << std::endl;


}
