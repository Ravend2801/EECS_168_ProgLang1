/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 6
 * Description:  This program will create an array of strings.
 * Date: 04/02/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>

int main()
{
    int m = 0;
    while(m<1){
        std::cout<<"Input an array size for you words array:";
        std::cin>>m;
    }

    std::string word[m];
    int length[m];
    for(int i=0; i<m;i++){
        std::cout<<"Input a word: ";
        std::cin>>word[i];
    }

    for(int i=0;i<m;i++){
        length[i]=word[i].length();
    }

    int longest_word = length[0];
    int shortest_word = length[0];

    for(int i=0; i<m; i++){
        if(length[i]>longest_word){
            longest_word = length[i];
        }else if(length[i]<shortest_word){
            shortest_word = length[i];
        }
    }

    for(int i=0; i<m; i++){
        if (length[i]==longest_word){
            std:: cout<< "The longest word is : "<< word[i] << "\n";
        }else if (length[i]==shortest_word){
            std::cout<<"The shortest word is : "<< word[i] << "\n";
        }

    }

    return(0);
}
