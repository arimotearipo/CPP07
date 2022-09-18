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
	cout << GRN << std::setw(3) << i << RESET;
}

template<typename T>
void	oddOrEven(T i)
{
	int n = static_cast<int>(i);
	if (n % 2)
		cout << GRN << std::setw(10) << "Odd" << RESET;
	else
		cout << GRN << std::setw(10) << "Even" << RESET;
}


int	main(void)
{
	cout << UWHT << "Testing plusone() with string..." << RESET << endl;
	string	str = "hello world";
	for (unsigned i = 0; i < str.length(); i++)
		cout << YEL << std::setw(3) << str[i] << RESET;
	cout << endl;
	::iter(&(str[0]), str.length(), &plusone);
	cout << endl << endl;;

	cout << UWHT << "Testing plusone() with random integers..." << RESET << endl;
	int	*num2 = new int[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		num2[i] = rand() % 100;
		cout << YEL << std::setw(3) << num2[i] << RESET;
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
		cout << YEL << std::setw(10) << num3[i] << " " << RESET;
	}
	cout << endl;
	iter(num3, 10, oddOrEven);
	cout << endl << endl;

	cout << UWHT << "TESTING oddOrEven() with string..." << RESET << endl;
	for (unsigned i = 0; i < str.length(); i++)
		cout << YEL << std::setw(10) << str[i] << "(" << static_cast<int>(str[i]) << ")" << RESET;
	cout << endl;
	iter(str.c_str(), str.length(), &oddOrEven);
	cout << endl;

	cout << UWHT "Ending programme..." RESET << endl;
	delete[] num2;
	delete[] num3;
	return (0);
}