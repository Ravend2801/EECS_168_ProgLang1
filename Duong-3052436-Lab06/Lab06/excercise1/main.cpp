/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 6
 * Description:  This program will create a loop that will ask the user to input values for the array and then calculate sum, average, min, and max for the array of doubles.
 * Date: 02/04/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>

int main()
{
    double arr[5];
    std::cout<<"Please enter 5 numbers\n";
    for (int i=0; i<5; i++){
        std::cout<<"Input a number into your array: ";
        std::cin>>arr[i];
    }

    std::cout<<"Here are all the numbers in your array:\n";
    for(int i=0; i<5;i++){
        std::cout<< arr[i]<<std::endl;
    }

    int sum=0, average=0, max=arr[0], min=arr[0];

    for(int i=0; i<5; i++){
        sum+=arr[i];
        if (max<arr[i]){
            max = arr[i];
        }else if(min>arr[i]){
            min = arr[i];
        }
    }
    average = sum/5;

    std::cout<<"The sum of all the values is: " << sum <<"\n";
    std::cout<<"The average of all the values is: " << average <<"\n";
    std::cout<<"The largest value is : " << max <<"\n";
    std::cout<<"The smallest value is : " << min <<"\n";

    return(0);
}
