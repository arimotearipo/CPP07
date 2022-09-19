#include "Array.hpp"

using std::cout;
using std::endl;
using std::string;

// int	main(int ac, char **av)
// {
// 	if (ac != 7)
// 	{
// 		cout << "./array [size of int array] [int array index to access] [new value for int] [size of char array] [char array index to access] [new value for char]" << endl;
// 		return (1);
// 	}

// 	srand(time(0));

// 	int array_size = atoi(av[1]);
// 	cout << UWHT << "Testing with " << array_size << " integers..." << RESET << endl;
// 	Array<int>	test(array_size);

// 	for (unsigned int i = 0; i < test.size(); i++)
// 	{
// 		int num = rand() % 100;
// 		cout << "Filling in " << GRN << num << RESET << " at index " << i << endl;
// 		test[i] = num;
// 	}
// 	cout << endl;

// 	cout << UWHT "Printing the content of the array..." RESET << endl;
// 	cout << test << endl;
// 	cout << endl;

// 	cout << UWHT "Printing test size..." RESET << endl;
// 	cout << test.size() << endl << endl;

// 	int	badindex = atoi(av[2]);
// 	cout << UWHT "Trying to access memory at index " << badindex << RESET << endl;
// 	try
// 	{
// 		cout << test[badindex] << endl;
// 	}
// 	catch (std::exception const &e)
// 	{
// 		cout << BRED "Caught an error: " RESET << RED << e.what() << RESET << endl;
// 	}
// 	cout << endl;

// 	int newvalue = atoi(av[3]);
// 	cout << UWHT "Trying to change the value in int array at index " << badindex << " to " << newvalue << RESET << endl;
// 	try
// 	{
// 		test[badindex] = newvalue; // it should not be able to do this as the [] operator overloader is a const
// 	}
// 	catch (std::exception const &e)
// 	{
// 		cout << BRED "Caught an error: " << RED << e.what() << RESET << endl;
// 	}
// 	cout << endl;

// 	cout << UWHT "Printing the array again..." RESET << endl;
// 	cout << test << endl;
// 	cout << endl;

// 	int	array_size2 = atoi(av[4]);
// 	cout << UWHT << "Testing with 50 random chars..." << RESET << endl;
// 	Array<char> test2(array_size2);

// 	// 97 to 122
// 	for (unsigned int i = 0; i < test2.size(); i++)
// 	{
// 		char c = 97 + (rand() % 26);
// 		cout << "Filling in " << GRN << c << RESET << " at index " << i << endl;
// 		test2[i] = c;
// 	}
// 	cout << endl;

// 	cout << UWHT "Printing the content of the char array..." RESET << endl;
// 	cout << test2 << endl;
// 	cout << endl;

// 	cout << UWHT "Printing the size..." RESET << endl;
// 	cout << GRN << test2.size() << RESET << endl;
// 	cout << endl;

// 	int	badindex2 = atoi(av[5]);
// 	cout << UWHT "Trying to access memory in char array at index " << badindex2 << RESET << endl;
// 	try
// 	{
// 		cout << test2[badindex2] << endl;
// 	}
// 	catch (std::exception const &e)
// 	{
// 		cout << BRED "Caught an error: " RESET << RED << e.what() << RESET << endl;
// 	}
// 	cout << endl;

// 	char newvalue2 = av[6][0];
// 	cout << UWHT "Trying to change the value at index " << badindex2 << " to " << newvalue2 << RESET << endl;
// 	try
// 	{
// 		test2[badindex2] = newvalue2; // it should not be able to do this as the [] operator overloader is a const
// 	}
// 	catch (std::exception const &e)
// 	{
// 		cout << BRED "Caught an error: " << RED << e.what() << RESET << endl;
// 	}
// 	cout << endl;

// 	cout << UWHT "Printing the array again..." RESET << endl;
// 	cout << test2 << endl;
// 	cout << endl;

// 	cout << UWHT << "Ending programme..." RESET << endl;
// 	return (0);
// }

int	main(void)
{
	cout << BYEL "Construction with no parameter" RESET << endl;
	cout << UWHT "Instantiating empty array..." RESET << endl;
	Array<int> empty;
	cout << endl;

	cout << UWHT "Trying to print the content of the array..." RESET << endl;
	cout << empty << endl;
	cout << endl;

	cout << UWHT "Trying to print the size of the array..." RESET << endl;
	cout << empty.size() << endl;
	cout << endl;

	cout << BYEL "Construction with parameter" RESET << endl;
	cout << UWHT "Instantiating with parameter..." RESET << endl;
	Array<int> array(50);
	cout << endl;
	
	cout << UWHT "Trying to print the content of the array..." RESET << endl;
	cout << array << endl;
	cout << endl;

	cout << UWHT "Trying to print the size of the array..." RESET << endl;
	cout << array.size() << endl;
	cout << endl;

	cout << BYEL "Testing copy constructor" RESET << endl;
	Array<int> tocopy(20);
	cout << endl;

	cout << UWHT "Trying to print the content of the array BEFORE copying..." RESET << endl;
	cout << "tocopy: " << tocopy << endl;
	cout << endl;

	cout << UWHT "Filling in random values..." RESET << endl;
	srand(time(NULL));
	for (unsigned i = 0; i < tocopy.size(); i++)
		tocopy[i] = rand() % 100;
	Array<int> arrayA(tocopy);
	cout << endl;

	cout << UWHT "Trying to print the content of the array AFTER copying..." RESET << endl;
	cout << "tocopy: " << tocopy << endl;
	cout << "arrayA: " << arrayA << endl;
	cout << endl;

	cout << UWHT "Trying to print the size of the arrays..." RESET << endl;
	cout << "tocopy: " << tocopy.size() << endl;
	cout << "arrayA: " << arrayA.size() << endl;
	cout << endl;

	cout << BYEL "Testing assignment operator" RESET << endl;
	Array<int> toassign(42);
	Array<int> arrayB;
	cout << endl;

	cout << UWHT "Trying to print the content of the array BEFORE assignment..." RESET << endl;
	cout << "toassign: " << toassign << endl;
	cout << "arrayB: " << arrayB << endl;
	cout << endl;

	cout << UWHT "Filling in random values..." RESET << endl;
	for (unsigned i = 0; i < toassign.size(); i++)
		toassign[i] = rand() % 100;
	arrayB = toassign;
	cout << endl;

	cout << UWHT "Trying to print the content of the array AFTER assignment..." RESET << endl;
	cout << "toassign: " << toassign << endl;
	cout << "arrayB  : " << arrayB << endl;
	cout << endl;

	cout << UWHT "Trying to print the size of the arrays..." RESET << endl;
	cout << "tocopy: " << toassign.size() << endl;
	cout << "arrayB: " << arrayB.size() << endl;
	cout << endl;
	return (0);
}