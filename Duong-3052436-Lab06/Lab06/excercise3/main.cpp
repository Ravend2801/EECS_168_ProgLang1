/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong 
 * Assignment:   EECS-168 Lab 6
 * Description:  This program will create a program that reads in the first value, always an int, that tells how many values are in the file.
 * Date: 04/02/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<fstream>
#include<iostream>

int main()
{

    std::ifstream input("input.txt");
    int m; 
    input >> m;
    int num[m];

    for(int i=0; i<m; i++){
        input >> num[i];
    }

    std::cout<<"Contents of input.txt: \n[";

    for (int i = 0; i < m - 1; i++){
        std::cout << num[i] << ", ";
    }

    std::cout << num[m - 1] << "]\n\n";

    do
    {
        int search;
        std::cout<< "Input the value to search for: ";
        std::cin>>search;
        bool find = false;
        for(int i=0; i<m; i++){
            if(num[i]==search){
                find=true;
                break;
            }
        }

        if(find){
            std::cout<<search<<" is in the array.\n";
        }else{
            std::cout<<search<<" is not in the array.\n";
        }

        char y;
        std::cout<<"Do you want to quit(y/n): ";
        std::cin>>y;
        if(y=='y'){
            break;
        }
    
    }while(true);
    
    return(0);
}
