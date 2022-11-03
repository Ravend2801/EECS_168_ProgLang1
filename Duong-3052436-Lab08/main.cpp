/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong
 * Assignment:   EECS-168 Lab 8
 * Description:  This program will use several function definitions.
 * Date: 04/15/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.


#include<iostream>

using namespace std;
int lastDigit(int n) {
   return n % 10;
}

int removeLastDigit(int n) {
    if(n<=9)
        return 0;
    return n / 10;
}

int addDigit(int currentNum, int newDigit){
   return currentNum * 10 + newDigit;
}

int reverse(int n) {
    int reverse = 0;
    while(n != 0) {
        reverse = addDigit(reverse, lastDigit(n));
        n = removeLastDigit(n);
    }
    return reverse;
}

bool isPalindrome(int n) {
    return (n == reverse(n));
}

int countDigits(int n) {
    int count = 0;
    while(n != 0){
        n = removeLastDigit(n);
        count++;
    }
    return count;
}

int sumDigits(int n) {
    int sum = 0;
    while(n != 0){
        sum = sum + lastDigit(n);
        n = removeLastDigit(n);
    }
    return sum;
}

void printMenu() {
    cout <<"1) Count digits\n";
    cout <<"2) Sum digits\n";
    cout <<"3) Is Palindrome\n";
    cout <<"4) Reverse\n";
    cout <<"5) Exit\n";
    cout <<"Choice: ";
}

void run(){
    bool flag = true;
    int choice;
    int num;
    while(flag) {
        printMenu();
        cin >> choice;

        if(choice == 5) {
            flag = false;
            continue;
        }

        cout << "Enter the number: ";
        cin >> num;
        switch(choice){
            case 1:
                cout << "Digit count: " << countDigits(num) << endl << endl;
                break;
            case 2:
                cout << "Sum digit: " << sumDigits(num) << endl << endl;
                break;
            case 3:
                if(isPalindrome(num))
                    cout << "It is a palindrome number." << endl << endl;
                else
                    cout << "It is not a palindrome number." << endl << endl;
                break;
            case 4:
                cout << "Reverse: " << reverse(num) << endl << endl;
                break;
        }
    }
}

int main() {
    run();
    return(0);
}
