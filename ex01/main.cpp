#include "iter.hpp"
#include "colours.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::cout;
using std::string;
using std::endl;

template<typename T>
void	plusone(T i)
{
	i = i + 1;
	cout << i;
}

template<typename T>
void	oddOrEven(T i)
{
	if (i % 2)
		cout << std::setw(5) << "Odd";
	else
		cout << std::setw(5) << "Even";
	cout << " ";
}


int	main(void)
{
	cout << UWHT << "Testing plusone() with string..." << RESET << endl;
	string	str = "hello world";
	cout << GRN << str << RESET << endl;
	::iter(&(str[0]), str.length(), &plusone);
	cout << endl << endl;;

	cout << UWHT << "Testing plusone() with integers..." << RESET << endl;
	int	*num2 = new int[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		num2[i] = rand() % 100;
		cout << GRN << num2[i] << RESET;
	}
	cout << endl;
	iter(num2, 10, &plusone);
	cout << endl << endl;

	cout << UWHT << "Testing oddOrEven() with random integers..." << RESET << endl;
	int	*num3 = new int[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		num3[i] = rand() % 100;
		cout << GRN << std::setw(5) << num3[i] << " " << RESET;
	}
	cout << endl;
	iter(num3, 10, oddOrEven);
	cout << endl << endl;
	
	delete[] num2;
	delete[] num3;
	return (0);
}