/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Raven Duong 
 * Assignment:   EECS-168 Lab 3
 * Description:  This program will will open a restaurant that sells three items: Salad ($3.50 each), Pizza ($7.25 each), and Ice Cream ($5.50). My restaurant will do the following:

   - Ask the user if they want Salad then Pizza then Ice Cream
   -In all cases, you are prompting them for a yes/no answer. For yes they can type 'y' or 'Y', and for no they can type 'n' or 'N'
   -If they want an item, find out how many
   -The user must not be allowed to order less than zero of an item, if they do, simply set the amount they order to zero.
   -Ask them for their age, this will affect the discount
   -Anyone 55 or older gets a 10% discount off the total cost AFTER tax
   -Anyone 8 or younger gets all the ice cream they want for FREE! (This is not taxed!)
   -Display a cost per item (before any discounts), a subtotal (before any discounts), a tax amount, a discount amount, and a grand total
   -Tax is 25% (yikes!)
 * Date: 03-05-2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	cout.precision(2);
	cout<<fixed;
	int quantity_t,quantity_s,quantity_d,age;
	float subtotal,tax,discount,price_t,price_s,price_d; 
	char ans_t,ans_s,ans_d;
	cout<<"=============================\n"<<"WELCOME TO THE RESTAURANT\n"<<"=============================\n";
	cout<<"Do you want Salad? (y/n): ";
	cin>>ans_t;
	if (ans_t == 'y' || ans_t == 'Y') {
		cout<<"How many?: ";
		cin>>quantity_t;
	}
	cout<<'\n';
	cout<<"Do you want Pizza? (y/n): ";
	cin>>ans_s;
	if (ans_s == 'y' || ans_s == 'Y'){
		cout<<"How many?: ";
		cin>>quantity_s;
	}
	cout<<'\n';
	cout<<"Do you want Ice cream? (y/n): ";
	cin>>ans_d;	 
	if (ans_d == 'y'||ans_d=='Y') {
		cout<<"How many?: ";
		cin>>quantity_d;
	}
	cout<<'\n';
	cout<<"How old are you?: ";
	cin>>age;
	if (ans_t == 'n' || ans_t =='N' || quantity_t < 0) {
		quantity_t =0;
	}
	if (ans_s =='n' || ans_s == 'N' ||quantity_s <0) {
		quantity_s =0;
	}
	if (ans_d =='n' || ans_d =='N' ||quantity_d <0) {
		quantity_d =0;
	}
	
	price_t = quantity_t*3.50;
	price_s = quantity_s*7.25;
	price_d = quantity_d*5.50;
	cout<<"============================\n";
	cout<<quantity_t<<" Salad @ $3.50 ==> $"<<price_t<<'\n';
	cout<<quantity_s<<" Pizza @ $7.25 ==> $"<<price_s<<'\n';
	cout<<quantity_d<<" Ice cream @ $5.50 ==> $"<<price_d<<'\n';

	subtotal = price_t + price_s +price_d;
	if (age<=8) {
		tax = (subtotal -price_d)*0.25;
	}
	else {	
 	 	tax = subtotal * 0.25;
	}
	if (age > 55) {
		discount = 0.1*(subtotal+tax);
	}
	else if (age<=8) {
		discount = price_d;
	}
	cout<<"Subtotal: $"<<subtotal<<'\n'<<"Tax: $"<<tax<<'\n'<<"Discount: $"<<discount<<'\n'<<"============================\n";
	cout<<"Total: $"<<subtotal+tax-discount<<'\n';
	cout<<'\n';
	cout<<"Please come again!\n";
}


