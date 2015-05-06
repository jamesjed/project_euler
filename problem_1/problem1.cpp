/*
  File: problem1.cpp
  Author: James Edward Natanauan
  Date: 5-6-2015

  This program is for finding the solution to the following
  Project Euler problem:

  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
  The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
 
 */

#include <iostream>
#include <stdio.h>

using namespace std;

//Counter for the total sum of the multiples of 3 or 5 below 1000
int total = 0;

int main()
{

	//Loop through all numbers below 1000 starting with zero
	for (int i = 0; i < 1000; i++)
	{
		//Condition which looks for multiples of 3 or 5 thorugh modulo operation
		if ( i%3 == 0 || i%5 == 0)
		{
			//If a multiple of 3 or 5 is found, increment total by that multiple
			total = total + i;
		}

	}

	//Print the final value of total which is the solution 
	cout << "The answer is: " << total << endl;	
}