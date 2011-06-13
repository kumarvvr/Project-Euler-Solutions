//============================================================================
// Name        : ProjectEuler1.cpp
// Author      : Kumar
// Version     :
// Copyright   : CopyLeft
// Description : Solution to ProjectEuler Problem #1
//
// Problem Description : Find the sum of all numbers below 1000 that are
//			 multiples of 3 or 5
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int n=0;
	cout << "Enter the maximum limit: ";
	cin >> n;
	for(int i=1;i<n;i++)
	    {
		if(i%3 == 0 || i%5 == 0)
		    sum = sum + i;
	    }
	cout<<" Sum is "<<sum;
	return 0;
}
