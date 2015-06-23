#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{

	long long num = 600851475143;
	long long p = 3;
	long long largest_prime = 1;

	//Remove all even factors. All even factors can be further factored to a number divisible by 2.
	while(num % 2 == 0){
		largest_prime = 2;
		num = num/2;
	}

	//Factor all the odd numbers starting at 3.
	while(num != 1){
		while(num % p == 0) {
			largest_prime = p;
			num = num/p;
		}
		p += 2;
	}

	printf("%ld\n", largest_prime);

	return 0;
}