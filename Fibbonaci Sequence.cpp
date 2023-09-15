// Samuel5_Prob2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	int ent;
	int xn = 0;
	int x1 = 0;
	int x2 = 1;
	cout << "Enter integer n for your Fibbonaci Sequence" << endl;
	cin >> ent;
	while (ent < 0) {
			cout << "Enter a positive integer number for the Fibbonaci Sequence greater than 0" << endl;
			cin >> ent;
		}
	for (int i = 1; i < ent; i++)
	{
		xn = x1 + x2;
		x1 = x2;
		x2 = xn;
	}
	if (ent == 1)
	{
		xn = 1;
	}
	cout << "The result from the " << ent << "th number is " << xn << endl;
	return 0;

}


