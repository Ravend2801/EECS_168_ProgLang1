/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 07
 * Description:  This program will obtain a file name from the user, which will contain data pertaining to a 2D array.
 * Date: 04/09/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include <iostream>
#include <fstream>

int main()
{
std::string fileName;
std::string line;
int rows,cols;
std::cout<<"Enter the input file name: ";
std::cin>>fileName;
std::ifstream myfile (fileName.c_str());
if (myfile.is_open()){
    myfile>>rows;
    myfile>>cols;
    double avg[rows],a[rows][cols];
    double totalavg=0;
for(int i=0;i<rows;i++){
    avg[i]=0;
    for(int j=0;j<cols;j++){
        myfile>>a[i][j];
        avg[i]=avg[i]+a[i][j];
    }
    avg[i]=avg[i]/cols;
    totalavg=avg[i]+totalavg;
}
myfile.close();

totalavg=totalavg/rows;

std::ofstream myfile1;
myfile1.open ("averages.txt");
myfile1<<"Total average: "<<totalavg<<"\n";
for(int i=0;i<rows;i++){
    myfile1 << "Row "<<(i+1)<<" average: "<<avg[i]<<"\n";
}
myfile1.close();

std::ofstream myfile2;
myfile2.open ("reverse.txt");
for(int i=0;i<rows;i++){
    for(int j=cols-1;j>=0;j--){
        myfile2 << a[i][j]<<"\t";
    }
    myfile2<<"\n";
}
myfile2.close();

std::ofstream myfile3;
myfile3.open ("flipped.txt");
for(int i=rows-1;i>=0;i--){
    for(int j=0;j<cols;j++){
        myfile3 << a[i][j]<<"\t";
    }
    myfile3<<"\n";
}
myfile3.close();

if(rows==cols){
    std::ofstream myfile4;
    myfile4.open ("diagonal.txt");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            myfile4 << a[j][i]<<"\t";
        }
        myfile4<<"\n";
    }
        myfile4.close();
}
}else{
    std::cout << "Unable to open file";
}

return (0);

}

