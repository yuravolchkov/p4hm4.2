#pragma once
#include <iostream>
#include "print_dynamic_array.h"

void print_dynamic_array(int* &arr, int logical_size, int actual_size)
{
	
	for (int i = 0; i < actual_size; i++)
	{
		if (i < logical_size)
		{
			std::cout << arr[i];
		}
		else if (i >= logical_size)
		{
			std::cout << "_";
		}
		if (i + 1 < actual_size)
		{
			std::cout << " ";
		}
	}
}