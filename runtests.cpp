#include <iostream>
#include <fstream>
#include <vector>

#include "Timer.h"
#include "search.h"

int main()
{
	std::vector<int> numbers;
	std::vector<int> search;

	// TODO:
	// read the file "numbers" into the numbers vector
	// read the file "search" into the search vector
	ifstream inputFile("numbers");


	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	// TODO:
	// repeat the above two blocks but use the binary search functions.
	{
	       	Timer timer("Time to Binary search all values: ");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
			std::cout << "Found " << found << "/"
				<< search.size() << "values. " << std::endl;
		}
	}

	{
	        Timer timer("Time to linear search all values (pointers): ");

	        int found = 0;
	        for (size_t i = 0; i < search.size(); i++)
	        {
		        if (binarySearch(numbers.data(), numbers.data() + numbers.size(),search[i]))
				found++;
	        }
 	               std::cout << "Found "<< found << "/"
	                    << search.size() << " values." << std::endl;
       	}
       	
	return 0;
}

