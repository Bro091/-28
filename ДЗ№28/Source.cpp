#include<iostream>
#include <string>
#include "Products.h"






int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n;

	struct product pr {
	"Sigarets",
	30,
	170.
	};
	//Задача 1
	std::cout << "Задание 1.\n";
	print_prod(pr);

	//Задача 2
	std::cout << "Задание 2.\n";
	full_price(pr);

	//Задача 3
	std::cout << "Задание 3.\n";
	std::cout << "Введите кол-во убывшего товара -> \n";
	std::cin >> n;

	std::cout << "Остаток товара -> " << sell(pr, n);

	return 0;
}