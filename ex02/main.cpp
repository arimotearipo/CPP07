#include "Array.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(int ac, char **av)
{
	if (ac != 7)
	{
		cout << "./array [size of int array] [int array index to access] [new value for int] [size of char array] [char array index to access] [new value for char]" << endl;
		return (1);
	}

	srand(time(0));

	int array_size = atoi(av[1]);
	cout << UWHT << "Testing with " << array_size << " integers..." << RESET << endl;
	Array<int>	test(array_size);

	for (unsigned int i = 0; i < test.size(); i++)
	{
		int num = rand() % 100;
		cout << "Filling in " << GRN << num << RESET << " at index " << i << endl;
		test[i] = num;
	}
	cout << endl;

	cout << UWHT "Printing the content of the array..." RESET << endl;
	cout << test << endl;
	cout << endl;

	cout << UWHT "Printing test size..." RESET << endl;
	cout << test.size() << endl << endl;

	int	badindex = atoi(av[2]);
	cout << UWHT "Trying to access memory at index " << badindex << RESET << endl;
	try
	{
		cout << test[badindex] << endl;
	}
	catch (std::exception const &e)
	{
		cout << BRED "Caught an error: " RESET << RED << e.what() << RESET << endl;
	}
	cout << endl;

	int newvalue = atoi(av[3]);
	cout << UWHT "Trying to change the value at index " << badindex << " to " << newvalue << RESET << endl;
	try
	{
		test[newvalue] = newvalue; // it should not be able to do this as the [] operator overloader is a const
	}
	catch (std::exception const &e)
	{
		cout << BRED "Caught an error: " << RED << e.what() << RESET << endl;
	}
	cout << endl;

	cout << UWHT "Printing the array again..." RESET << endl;
	cout << test << endl;
	cout << endl;

	int	array_size2 = atoi(av[4]);
	cout << UWHT << "Testing with 50 random chars..." << RESET << endl;
	Array<char> test2(array_size2);

	// 97 to 122
	for (unsigned int i = 0; i < test2.size(); i++)
	{
		char c = 97 + (rand() % 26);
		cout << "Filling in " << GRN << c << RESET << " at index " << i << endl;
		test2[i] = c;
	}
	cout << endl;

	cout << UWHT "Printing the content of the array..." RESET << endl;
	cout << test << endl;
	cout << endl;

	cout << UWHT "Printing the size..." RESET << endl;
	cout << GRN << test.size() << RESET << endl;
	cout << endl;

	int	badindex2 = atoi(av[5]);
	cout << UWHT "Trying to access memory at index " << badindex2 << RESET << endl;
	try
	{
		cout << test2[badindex2] << endl;
	}
	catch (std::exception const &e)
	{
		cout << BRED "Caught an error: " RESET << RED << e.what() << RESET << endl;
	}
	cout << endl;

	char newvalue2 = av[6][0];
	cout << UWHT "Trying to change the value at index " << badindex << " to " << newvalue2 << RESET << endl;
	try
	{
		test2[newvalue] = newvalue2; // it should not be able to do this as the [] operator overloader is a const
	}
	catch (std::exception const &e)
	{
		cout << BRED "Caught an error: " << RED << e.what() << RESET << endl;
	}
	cout << endl;

	cout << UWHT "Printing the array again..." RESET << endl;
	cout << test2 << endl;
	cout << endl;

	cout << UWHT << "Ending programme..." RESET << endl;
	// system("leaks array");
	return (0);
}