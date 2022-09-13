#include "iter.hpp"
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

int	main(void)
{
	string	str = "hello world";

	::iter(&(str[0]), str.length(), &plusone);
	cout << endl;
	return (0);
}