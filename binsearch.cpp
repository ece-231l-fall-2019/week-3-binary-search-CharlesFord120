#include <vector>
#include <math.h>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	size_t left = 0;
	size_t right = set.size()-1;
	while (true)
	{
		size_t mid = floor((left+right)/2);

		if (left == value)
		{
			return true;
		}
		if (mid == value)
		{
			return true;
		}
		if (right == value)
		{
			return true;
		}               
	       	if (mid < value)
		 {
		         left = mid;                                                                    }
		if (mid > value)
		{
		 	right = mid;                                                                   }
		
	}	
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	while (true)
	{
		
	}
	return false;
}

