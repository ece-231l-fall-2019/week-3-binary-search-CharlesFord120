#include <vector>
#include <iostream>
#include "search.h"
using namespace std;
bool binarySearch(const std::vector<int>& set, int value)
{
	size_t left = 0;
	size_t right = set.size() - 1;
	while (left < right)
	{
		size_t mid = (left+right)/2;

		if (set[left] == value)
		{
			return true;
		}
		if (set[mid] == value)
		{
			return true;
		}
		if (set[right] == value)
		{
			return true;
		}               
	       	if (set[mid] < value)
		{
		         left = mid + 1;
		}
		else
		{
		 	right = mid - 1;
		}
	}	
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	while (begin < end)
	{
		const int *mid = begin + (end - begin) / 2;
		if (*begin == value)
		{
			return true;
		}
		if (*mid == value)
		{
			return true;
		}
		if (*end == value)
		{
			return true;
		}
		if (*mid < value)
		{
			begin = mid + 1;
		}
		else
		{
			end = mid - 1;
		}

	}
	return false;
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
		const int *mid = begin + (end - begin) / 2;
		if (mid == end)
		{
			return false;
		}
		if (*mid == value)
		{
			return true;
		}
		if (*mid < value)
		{
			begin = mid + 1;
		}
		else
		{
			end = mid;
		}

	
	return binarySearchRecursive(const int *begin, const int *end, int value);
}

