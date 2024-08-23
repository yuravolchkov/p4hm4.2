#pragma once
#include <iostream>
#include "check_size.h"

bool check_size(int& total_size, int& logical_part)
{
	if (total_size >= logical_part)
	{
		return true;
	}
	else
	{
		std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
		std::system("pause");
		return false;
	}
}

int* create_array(int total_size)
{
	int* new_array = new int[total_size];
	return new_array;
}

void fill_array(int* f_array, int& logical_part)
{
	for (int i = 0; i < logical_part; i++)
	{
		std::cout << "Введите arr[" << i << "]: ";
		std::cin >> f_array[i];
	}
}