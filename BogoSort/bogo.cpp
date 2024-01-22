#include "bogo.h"

namespace bogo
{
	long long sort(int* vector, const size_t size)
	{
		srand(time(NULL));
		rand();

		int iterations{};
		bool isSorted = false;
		while (!isSorted)
		{
			bool testSort = true;

			//check if array is sorted
			for (size_t i = 1; i < size && testSort; i++)
			{
				if (vector[i] < vector[i - 1])
					testSort = false;
			}

			//return if is sorted
			if (testSort)
			{
				isSorted = true;
			}
			else
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
			iterations++;
		}	
		return iterations;
	}
}