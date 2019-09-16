#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Timer.h"
#include "search.h"
#include "sort.h"
using namespace std;

void ReadFile(string filename, vector<int> &set)
{
        int value;
        ifstream fin(filename);
        while (fin >> value)
        {
		if (fin.eof())
	        {
			break;
		}
		set.push_back(value); }
}

int main()
{
	vector<int> numbers;

	vector<int> search;
	// TODO:
	// read the file "numbers" into the numbers vector
	// read the file "search" into the search vector
	ReadFile("numbers", numbers);
	ReadFile("search", search);

	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		cout << "Found "<< found << "/"
			<< search.size() << " values." << endl;
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

		cout << "Found "<< found << "/"
			<< search.size() << " values." << endl;
	}

	{
	       	Timer timer("Time to binary search all values: ");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
		}
			cout << "Found " << found << "/"
				<< search.size() << " values." << endl;
		
	}

	{
	        Timer timer("Time to binary search all values (pointers): ");
		int found = 0;
	        for (size_t i = 0; i < search.size(); i++)
	        {
		        if (binarySearch(numbers.data(), numbers.data() + numbers.size(),search[i]))
				found++;
	        }
 	               cout << "Found "<< found << "/"
	                    << search.size() << " values." << endl;
        }
	
	{
		Timer timer("Time to bubble sort: ");
		bubbleSort(search.data(),search.data()+search.size());
	}
 
          
 	 return 0;          
}                 
