#include "sort.h"
#include <iostream>

using namespace std;

void bubbleSort(int *begin, const int *end)
{
	for (int *i = begin; i != end; i++)
	{
		for (int *j = i+1; j != end; j++)
		{
			if (*begin > *j)
			{
				int temp = *i;
				*i = *j;
				*j = temp;
			}
		}
	}
}
