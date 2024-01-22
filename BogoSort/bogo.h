#pragma once
#include <random>

namespace bogo
{
	/// <summary>
	/// Shuffles the vector and test if the its values are sorted.
	/// </summary>
	/// <param name="vector"> - Vector to be sort.</param>
	/// <param name="size"> - Vector size.</param>
	/// <returns>Amount of iterations</returns>
	long long sort(int* vector, const size_t size);
}