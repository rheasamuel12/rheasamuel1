// Samuel5_Prob2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	//dx = 1/n
	//y = sqrt root (1-x^2)  
	// area  + area *4
	// x = (i-1)dx
	double area, pi;
	double piReal = 3.14159265;
	int n = 0;
	cout << "How many rectangles do you wish to use to estimate pi?" << endl;
	cin >> n;
	n = pow(10, n);

	double dx = 1.0 / n;
	double totalS = 0.0;
	for (int i = 1; i <= n; i++)
	{
		//compute xi
		double xi = (i-1)* dx;
		//compute the area of the ith
			//rectangle iS;
		area = sqrt((1 - pow(xi,2))) * dx;
		//totalS += iS;
		totalS += area;
	}
	pi = totalS * 4;

	//cout << "The estimation for pi is " << pi << endl;
	cout << "The error between real pi and your estimation is" << piReal - pi << endl;
	return 0;
}


