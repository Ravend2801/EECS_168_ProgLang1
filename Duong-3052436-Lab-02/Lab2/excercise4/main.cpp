
/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will see how to cast a character to an int.
 * Date: Feb22-21
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>

int main()
{

    char c;
    std::cout << "Input a character: ";
    std::cin >> c;
    std::cout << "The ASCII value for 'a' is: " << int(c) << std::endl;
    std::cout << "Goodbyeee!" << '\n';

    return 0;
}


