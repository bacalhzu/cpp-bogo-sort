#pragma once
#include <random>

namespace bogo
{
	/// <summary>
	/// Test if the vector's values are sorted.
	/// </summary>
	/// <param name="vector"> - Vector to be sort.</param>
	/// <param name="size"> - Vector size.</param>
	/// <returns>If the vector is sorted</returns>
	bool isSorted(const int* vector, const size_t size);

	/// <summary>
	/// Shuffles the vector's values.
	/// </summary>
	/// <param name="vector"> - Vector to be sort.</param>
	/// <param name="size"> - Vector size.</param>
	void shuffle(int* vector, const size_t size);


	/// <summary>
	/// Sort the vector.
	/// </summary>
	/// <param name="vector"> - Vector to be sort.</param>
	/// <param name="size"> - Vector size.</param>
	/// <returns>Amount of iterations</returns>
	long long sort(int* vector, const size_t size);
}