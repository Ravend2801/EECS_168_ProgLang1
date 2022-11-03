/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will convert the input temperature from Fahrenheit to Celsius.
 * Date: Feb22-21
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>

int main()
{
    std::cout << "Enter temperature in Fahrenheit pls!\n";
    float TF = 0.0;
    std::cin >> TF;
    float TC =0.0;
    TC = (TF-32)*(5.0/9.0);
    std::cout << "This is your temperature in Celsius: " << TC << std::endl;

    return 0;
}


