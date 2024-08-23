#include <iostream>
#include "print_dynamic_array.h"
#include "check_size.h"
#include"append.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	int total_size, logical_part, temp_key;

	for (bool i = false;i!=true;)
	{
		std::system("cls"); // �������� �����
		std::cout << "������� �������c��� ������ �������: ";
		std::cin >> total_size;
		std::cout << "������� ���������� ������ �������: ";
		std::cin >> logical_part;
		i = check_size(total_size, logical_part);
	}


	int* stat_array = create_array(total_size);
	fill_array(stat_array, logical_part);
	std::cout << "������������ ������: ";
	print_dynamic_array(stat_array, logical_part, total_size);
	for (bool i = false; i != true;)
	{
		std::cout << "\n������� ������� ��� ����������: ";
		std::cin >> temp_key;
		append_to_dynamic_array(stat_array, logical_part, total_size, temp_key, i);
		if (i == false)
		{
			std::cout << "������������ ������: ";
			print_dynamic_array(stat_array, logical_part, total_size);
		}
	}
	std::cout << "�������! ��� ������: ";
	print_dynamic_array(stat_array, logical_part, total_size);
	delete[] stat_array;
	std::cout << std::endl;
	return 41;
}