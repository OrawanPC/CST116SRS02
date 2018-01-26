// Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using std::ios;
using std::scientific;
using std::cin;




int main()
{
	double number;

	std::cout << "Enter a number: ";
	cin >> number;
	std::cout << std::scientific << number;


	
    return 0;
}

  