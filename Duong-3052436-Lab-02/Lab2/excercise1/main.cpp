/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong 
 * Assignment:   EECS-168 Lab 02
 * Description:  This program will solve for the hypotenuse of a right triangle.
 * Date: Feb22-21
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>
#include<math.h>

int main()
{
    double a = 8.0;
    double a1 = 0.0;
    a1 = pow(a,2.0);
    double b = 10.5;
    double b1 = 0.0;
    b1 = pow(b,2.0);
    double c = 0.0;
    c = sqrt(a1+b1);
    std::cout << "Will use the formula a^2 + b^2 = c^2. \n";
    std::cout << "Input a value for a: " << a << std::endl ;
    std::cout << "Input a value for b: " << b << std::endl;
    std::cout << "The hypotenuse is : " << c << std::endl;

    return 0;
}
