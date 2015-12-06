// peanutbutterjelly.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


std::string parameter1;
std::string parameter2;

int main()
{
	std::cout<< "enter parameter 1:  ";
	std::cin >> parameter1;

	std::cout << "enter parameter 2:  ";
	std::cin >> parameter2;

	//cout << "enter parameter 1:  ";
	//cin >> parameter1;

	//cout << "enter parameter 1:  ";
	//cin >> parameter1;

	std::cout << parameter1;
	_getch();
	std::cout << parameter2;

	_getch();

    return 0;

}


