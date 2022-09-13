#include "Array.hpp"

using std::cout;
using std::endl;
using std::string;

int	main(void)
{
	srand(time(0));

	cout << UWHT << "Testing with 10 integers..." << RESET << endl;
	Array<int>	test(10);

	for (int i = 0; i < 10; i++)
	{
		int num = rand() % 100;
		cout << "Filling in " << GRN << num << RESET << " at index " << i << endl;
		test[i] = num;
	}
	cout << test << endl;
	cout << "Printing test size..." << endl;
	cout << test.size() << endl;

	cout << UWHT << "Testing with 50 random chars..." << RESET << endl;
	Array<char> test2(50);

	// 97 to 122
	for (int i = 0; i < test2.size(); i++)
	{
		char c = 97 + (rand() % 26);
		cout << "Filling in " << GRN << c << RESET << " at index " << i << endl;
		test2[i] = c;
	}
	cout << test << endl;
	cout << "Printing the size..." << endl;
	cout << GRN << test.size() << RESET << endl;
	cout << "Trying to access bad memory..." << endl;
	cout << test2[-5] << endl;

	// system("leaks array");
	return (0);
}