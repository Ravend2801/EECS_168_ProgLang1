/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will ask the user how many Gibbonacci numbers they want to see. Assume good input. 
 * Date: March 15,2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.



#include<iostream>

using namespace std;

int main()
{
    int g0, g1, g2, n, i;
    cout<< "How many Gibbonacci numbers do you want printed?: ";
    cin>>n;
    g0=5;
    g1=7;
    cout<<g0<<","<<g1<<",";
    for(i=3; i<=n ;i++){
        g2=g0+g1;
        if(i==1){
            cout<<g2;
        }else if(i==n){
            cout<<g2;
        }
        else{
            cout<<g2<<",";
            g0=g1;
            g1=g2;
        }
    }
    cout<<"\n";
    return(0);
}


