/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will solves the quadratic equation. 
 * Date: Feb22-21
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>
#include<math.h>
int main()
{
    std::cout << "Enter a\n";
    double a = 0.0;
    std::cin >> a;
    std::cout << "Input a: " << a << std::endl;
    std::cout << "Enter b\n";
    double b = 0.0;
    std::cin >> b;
    std::cout << "Input b: " << b << std::endl; 
    std::cout << "Enter c\n";
    double c = 0.0;
    std::cin >> c;
    std::cout << "Input c: " << c << std::endl;

    double b1 = 0.0;
    b1 = pow(b,2.0);

    double z = 0.0;
    z = sqrt(b1-(4*a*c));

    double x1 = 0.0;
    x1 = (-b+z)/(2*a);
    std::cout << "root 1: " << x1 << std::endl;

    double x2 = 0.0;
    x2 = (-b-z)/(2*a);
    std::cout << "root 2: " << x2 << std::endl;

    return 0;
}
