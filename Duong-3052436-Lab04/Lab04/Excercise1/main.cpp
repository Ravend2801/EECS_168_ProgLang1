/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will make an ASCII program!
 * Date: March 15, 2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>

using namespace std;
int main()
{
    int choice;
    do
    {
        cout<<endl;
        cout<<"1) Select a specific number\n";
        cout<<"2) Display visible ASCII values (33 to 126)\n";
        cout<<"3) Exit\n";
        cout<<"Choice: ";
        cin>>choice;

        if(choice==1){
            int value;
            cout<< "Enter value: ";
            cin>>value;
            if(value >=33 && value <= 126){
                cout<<value<<" = "<<(char)value<<endl;
            }else{
                cout<<"Value is not in the visible range (33 to 126)"<<endl;
            }
            break;
        }else if(choice==2){

            for(int i=33; i<127; i++){
                cout<<i<<" = "<<(char)i<<endl;
            }
            break;
        }else if(choice==3){
            cout<<"Exit program";
            cout<<"\n";
        }else{
            cout<<"Wrong Choice!"<<endl;
        }
    }while(choice!=3);
    return(0);
}
