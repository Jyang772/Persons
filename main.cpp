#include "Person.h"
#include "student.h"
#include "faculty.h"

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>




int main()
{

    int one = 1;
    int two = one;
    std::cout << two << std::endl;


    Person driver("Richard Stallman",62,"444-44-4444");
    std::cout << driver << std::endl;


    std::cout << "Before: " << std::endl;


    Person test = driver;

    //driver.~Person();
    std::cout << test << std::endl;

    //std::cout << test << std::endl;

    std::cout << "End" << std::endl;



}


