//============================================================================
// Name        : M2_CTA.cpp
// Author      : Nando
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
    string firstName;
    string lastName;
	cout << "**Input Console Application**" << endl;

	// start loop
	for (int i = 0; i < 3; i++)
	{
	cout << "Enter your firstname: ";
	getline(cin, firstName);
	cout<< "Enter your lastname : ";
	getline(cin, lastName);
	cout <<"Your firstname is: " << firstName <<endl;
	cout << "Your lastname is " << lastName <<endl;
	cout << "Full name: "<< firstName + " " + lastName <<endl;
	cout << "=========================" << endl;
	}
	cout << "Program is finished!";

	return 0;
}
