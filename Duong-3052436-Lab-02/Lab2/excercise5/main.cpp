/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 2
 * Description:  This program wil take a number of sodas and then tell the user how many Fridge Cubes, six packs, and single sodas it will be packages as. 
 * Date: Feb22-21
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>

int main()
{
    int Fridge_Cubes, Six_packs, Singles;
    int x;
    int Sodas;
    std::cout << "How many sodas do you have? ";
    std::cin >> Sodas;
    Fridge_Cubes = Sodas/24;
    x = Sodas%24;
    Six_packs = x/6;
    x = x%6;
    Singles = x;
    std:: cout << "Fridge Cubes: " << Fridge_Cubes << std::endl;
    std::cout << "Six-packs: " << Six_packs << std::endl;
    std::cout << "Singles: " << Singles << std::endl;

    return 0;

}

