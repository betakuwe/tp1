//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "MyClass.h"
using namespace std;

int main(int argc, const char* argv[])
{
    std::cout << "Hello brave new world" << std::endl;

    MyClass *myclass = new MyClass("jpg", "myfile");
    std::cout << *myclass << std::endl;

    return 0;
}
