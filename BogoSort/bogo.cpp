#include "bogo.h"

namespace bogo
{
	bool isSorted(const int* vector, const size_t size)
	{
		//check if array is sorted
		for (size_t i = 1; i < size; i++)
		{
			if (vector[i] < vector[i - 1])
				return false;
		}
		return true;
	}

	void shuffle(int* vector, const size_t size)
	{
		//shuffle the array
		for (size_t i = 0; i < size; i++)
		{			
			//get a random index between the current and last index
			int randomIndex = (rand() % size - i) + i;

			//stores de current value
			int aux = vector[i];

			//swap values
			vector[i] = vector[randomIndex];
			vector[randomIndex] = aux;
		}
	}

	long long sort(int* vector, const size_t size)
	{
		srand(time(NULL));
		int iterations{};
		while (!isSorted(vector, size))
		{
			shuffle(vector, size);				
			iterations++;
		}	
		return iterations;
	}
}