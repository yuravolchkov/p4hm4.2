#include"append.h"

void append_to_dynamic_array(int*& a_arr, int& logical_size, int& actual_size, int& temp_key, bool& i)
{

	if (logical_size < actual_size && temp_key != 0)
	{
		a_arr[logical_size] = temp_key;
		logical_size++;
	}
	if (logical_size == actual_size && temp_key != 0)
	{
		actual_size *= 2;
		int* temp_arr = create_array(actual_size);
		for (int i = 0; i < logical_size; i++)
		{
			temp_arr[i] = a_arr[i];
		}
		temp_arr[logical_size] = temp_key;
		delete[] a_arr;
		a_arr = temp_arr;
	}
	if (temp_key == 0)
	{
		i = true;
	}
}