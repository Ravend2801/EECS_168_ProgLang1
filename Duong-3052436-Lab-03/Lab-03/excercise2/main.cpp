/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong 
 * Assignment:   EECS-168 Lab 3
 * Description:  This program will obtain a numerator and a denominator from the user. Then, display the result of long division from the user. 
 * Date: 03-05-2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>
int main()
{

    int x,y;
    std::cout << "Enter a numerator: ";
    std::cin >> x;
    std::cout << "Enter a denominator: ";
    std::cin >> y;

    if(y==0)
    {
        std::cout <<"Sorry, you may not divide by zero.\n";
    }else{
        std:: cout << x <<" / "<< y <<" = "<< (x/y) <<"R"<< x%y << std::endl;
    }

    return(0);
}
