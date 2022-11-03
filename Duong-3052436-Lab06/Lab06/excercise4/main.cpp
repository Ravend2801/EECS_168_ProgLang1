/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 6
 * Description:  This program will create a program about arrays, reading from file and writing to File.
 * Date: 04/02/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main()

{

    int a=0;
    double min,max;
    double* nums =nullptr; 
    double* normalnums =nullptr; 

    string filename;
    cout<<"Enter file name:"; 
    cin>>filename;

    ifstream inFile;

    inFile.open(filename);

    inFile >> a;

    nums = new double[a];

    normalnums = new double[a];

    for(int i=0;i<a;i++) {
        inFile >> nums[i];
    }

    min=nums[0];
    max=nums[0];

    for(int i=1;i<a;i++){
        if(nums[i]<min){
            min=nums[i];
        }
        if(nums[i]>max){
            max=nums[i];
        }
    }


    for(int i=0;i<a;i++) {
        normalnums[i] = (nums[i]-min)/(max-min);
    }

    ofstream normalizedFile;
    ofstream reversedFile;

    normalizedFile.open("normalized.txt");
    reversedFile.open("reversed.txt");

    normalizedFile << "Original array: [";
    for(int i=0;i<a;i++) {
        normalizedFile << nums[i];
        if(i!=a-1){
            normalizedFile<<", ";
        }
        if(i==a-1){
            normalizedFile<<"]"<<endl;
        }
    }

    normalizedFile << "Normalized array: [";
    for(int i=0;i<a;i++) {
        normalizedFile << normalnums[i];
    
        if(i!=a-1){
            normalizedFile<<", ";
        }
        if(i==a-1){
            normalizedFile<<"]"<<endl;
        }
    }

    reversedFile << "Original array: [";
    for(int i=0;i<a;i++) {
        reversedFile << nums[i];
        if(i!=a-1){
            reversedFile<<", ";
        }
        if(i==a-1){
            reversedFile<<"]"<<endl;
        }
    }

    reversedFile << "Reversed array: [";
    for(int i=a-1;i>=0;i--) {
        reversedFile << nums[i];
        if(i!=0){
            reversedFile<<", ";
        }
        if(i==0){
            reversedFile <<"]"<<endl;
        }
    }


   return 0;

}
