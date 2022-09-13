#include "iter.hpp"
#include "colours.h"
#include <iostream>

using std::cout;
using std::string;
using std::endl;

template<typename T>
void	plusone(T i)
{
	i = i + 1;
	std::cout << i;
}

template<typename T>
void	oddOrEven(T i)
{
	if (i % 2)
		cout << "Odd";
	else
		cout << "Even";
	cout << " ";
}

int	main(void)
{
	cout << UWHT << "Testing plusone() with string..." << RESET << endl;
	string	str = "hello world";

	::iter(&(str[0]), str.length(), &plusone);
	cout << endl << endl;;

	cout << UWHT << "Testing plusone() with integers..." << RESET << endl;
	int	num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(num, 10, &plusone);
	cout << endl << endl;

	cout << UWHT << "Testing oddOrEven() with integers..." << RESET << endl;
	int	num2[10] = {54, 25, 35, 74, 98, 47, 23, 1, 7, 6};
	iter(num2, 10, &oddOrEven);
	cout << endl << endl;
	return (0);
}