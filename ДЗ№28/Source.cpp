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
	//������ 1
	std::cout << "������� 1.\n";
	print_prod(pr);

	//������ 2
	std::cout << "������� 2.\n";
	full_price(pr);

	//������ 3
	std::cout << "������� 3.\n";
	std::cout << "������� ���-�� �������� ������ -> \n";
	std::cin >> n;

	std::cout << "������� ������ -> " << sell(pr, n);

	return 0;
}