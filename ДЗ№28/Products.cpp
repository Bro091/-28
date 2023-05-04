#pragma once
#include "Products.h"
#include <iostream>

void print_prod(const product& PR) {
	std::cout << "���:       " << PR.name << std::endl;
	std::cout << "���������� ������:   " << PR.number << std::endl;
	std::cout << "����: " << PR.price << std::endl << std::endl;
};

void full_price(const product& PR) {
	double sum_pr = 0;
	for (int i = 0; i < PR.number; i++)
		sum_pr = PR.number * PR.price;
	std::cout << "����� ���� - " << sum_pr << std::endl << std::endl;
};

double sell(struct product& PR, double num) {
	PR.number -= num;
	return PR.number;

}
