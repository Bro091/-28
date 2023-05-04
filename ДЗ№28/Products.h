#pragma once
#include <iostream>
#include <string>


struct product {

	std::string name = "noname";
	double number = 0;
	double price = 0;
};

void print_prod(const product& PR);
void full_price(const product& PR);
double sell(struct product& PR, double num);
