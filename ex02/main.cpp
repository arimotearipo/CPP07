#include "Array.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(void)
{
	cout << BYEL "Construction with no parameter" RESET << endl << endl;
	cout << UWHT "Instantiating empty array..." RESET << endl;
	Array<int> empty;
	cout << endl;

	cout << UWHT "Trying to print the content of the array..." RESET << endl;
	cout << empty << endl;
	cout << endl;

	cout << UWHT "Trying to print the size of the array..." RESET << endl;
	cout << empty.size() << endl;
	cout << endl;

	cout << BYEL "Construction with parameter" RESET << endl << endl;
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

	cout << BYEL "Testing accessor []" RESET << endl << endl;
	unsigned int _i = 300; // change this value to test
	cout << UWHT "Trying to access arrayB at index " << _i << "..." RESET << endl;
	try
	{
		cout << arrayB[_i] << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl;

	int newvalue = 777;
	cout << UWHT "Trying to change the value at index " << _i << " to " << newvalue << "..." RESET << endl;
	try
	{
		arrayB[_i] = newvalue;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl;

	cout << UWHT "Trying to print both arrays..." RESET << endl;
	cout << "toassign: " << toassign << endl;
	cout << "arrayB  : " << arrayB << endl;
	cout << endl;
	return (0);
}