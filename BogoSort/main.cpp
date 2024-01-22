#include <iostream>
#include "bogo.h"

int main()
{
	//with 1 - 9 elements imma still use this in my projects
	//with 10 elements its still "acceptable" lol
	//with 11 - 12 elements it takes a lot of time
	//with 13+ elements I gave up on waiting
	const int size = 10;

	int vector[size]{ 7, 2, 3, 5, 1, 0, 4, 9, 6, 8, };

	long long iterationCount = bogo::sort(vector, size);

	std::cout << "It tooks " << iterationCount << " iterations to sort the array.";

	return 0;
}