/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will ask the user for what day they want a count of people with the flu for. Then display the amount. 
 * Date: March 15, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>

using namespace std;

int main()
{

    int day;
    cout<<"OUTBREAK!\n";
    cout<<"What day do you want a sick count for?: ";
    cin>>day;

    int day1=1, day2=4, day3=21;
    int outcome;

    if(day<=0){
        cout<<"Invalid day";
    }else if(day==1){
        cout<<"Total peole with flu: "<<day1;
    }else if(day==2){
        cout<<"Total people with flu: "<<day2;
    }else if(day==3){
        cout<<"Total people with flu: "<<day3;
    }else{
        for(int i=4;i<=day;i++){
            outcome = day1 + day2 + day3;
            day1=day2;
            day2=day3;
            day3=outcome;
        }
        cout<<"Total people with flu: "<<outcome;
    }
    cout<<"\n";
    return(0);
}
