/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong 
 * Assignment:   EECS-168 Lab 3
 * Description:  This program will obtain a wind speed from the user and tell them either what category or type if it's just a tropical storm. If the wind speed is invalid, print an error. 
 * Date: 03-03-2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>
int main()
{
    int windspeed; 
    std::cout << "Tell me your wind speed!\n";
    std::cin >> windspeed;
    
    if (windspeed<18)
    {
        std::cout << "A wind speed of " << windspeed <<" m/s is a Tropical Depression.\n";
    } else if (windspeed>=18 && windspeed<33){
        std::cout << "A wind speed of " << windspeed << " m/s is a Tropical Storm.\n";
    } else if (windspeed>=33 && windspeed<43){
        std::cout << "A wind speed of " << windspeed << " m/s is a Category 1 hurricane.\n";
    } else if (windspeed>=43 && windspeed<50){
        std::cout << "A wind speed of " << windspeed << " m/s is a Category 2 hurricane.\n";
    } else if (windspeed>=50 && windspeed<58){
        std::cout << "A wind speed of " << windspeed << " m/s is a Category 3 hurricane.\n";
    } else if (windspeed>=58 && windspeed<70){
        std::cout << "A wind speed of " << windspeed << " m/s is a Category 4 hurricane.\n";
    } else if (windspeed>=70){
        std::cout <<"A wind speed of" << windspeed << " m/s is a Category 5 hurricane.\n";
    }
    else
    {
        std::cout<<"Negative wind? Sorry, that's invalid.\n";
    }

    return (0);
}



