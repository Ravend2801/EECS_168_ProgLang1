/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168
 * Description:  This program will present the user with a choice of patterns (e.g. Checker Board). Once the user makes a valid chose, the user then sets the size of the pattern. The size must be an integer larger than 3. 
 * Date: 03-24-2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>

using namespace std;

int main(){
char y;
do{
    cout<<" 1) CheckerBoard \n";
    cout<<" 2) Rook Path \n";
    cout<<" 3) Runing total \n";
    cout<<" 4) upper left Triangle \n";
    cout<<" 5) upper right Triangle \n";

    int choice , a;
    cout<<" Input a Choice: ";
    cin>>choice;
    while(choice<=0 || choice>5){
      cout<<"Error : enter valid choice( between 1 & 5 ): ";
      cin>>choice;
    }

    cout<<"Input a size: ";
    cin>>a;
    while(a<=3){
      cout<<"Error: enter valid size(>3):  ";
      cin>>a;
    }

  if(choice == 1){
    char o='O';
    char x='X';

    for(int i=0;i<a;i++){
      char curr = i%2==0?o:x;
      for(int j=0;j<a;j++){
        cout<<curr;
        curr = curr==o?x:o;
      }
      cout<<"\n";
    }
  }else if(choice == 2){
    cout<<" Input position of Rock  between 0  and "<<a-1<<" \n ";
    int x,y;
    cin>>x>>y;

    for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){

        if(i==x && y==j){
          cout<<"R";
        }else if(i==x){
          cout<<"-";
        }else if(j==y){
          cout<<"|";
        }else
          cout<<"*";
      }
      cout<<"\n";
    }
  }else if(choice == 3){
    int k=1;
    for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){
        if(j==a-1)
          cout<<k;
          else
          cout<<k<<",";
          k++;
      }
      cout<<"\n";
    }

  }else if(choice == 4){

    for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){
        if(i<=j)
        cout<<"*";
      }
      cout<<"\n";
    }

  }else if(choice == 5){

    for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){
        if(j>=i)
        cout<<"*";
        else
        cout<<" ";
      }
      cout<<"\n";
    }

  }else{
    cout << "Invalid choice" << endl;
  }

  cout<<" Do you want to quit (y/n)? : ";
  cin>>y;
  }while(y!='y' && y!='Y');

  return(0);
}




