// Output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using std::ios;
using std::setprecision;




int main()
{
	double i = 0;
	std::cout.setf( ios::fixed );
	std::cout.setf(ios::right);
	std::cout << setprecision (2);
	std::cout.imbue(std::locale("en-US"));
		
	i = 36364.87;
	std::cout << std::setw(10) << "West: " << "$" << std::setw(10) << i << std::endl;

	i = 12431.33;
	std::cout << std::setw(10) << "Midwest: " << "$" << std::setw(10) << i << std::endl;

	i = 127690.50;
	std::cout << std::setw(10) << "East: " << "$" << std::setw(10) << i << std::endl;

	i = 9200.00;
	std::cout << std::setw(10) << "South: " << "$" << std::setw(10) << i << std::endl;


   
	
	return 0;
}

