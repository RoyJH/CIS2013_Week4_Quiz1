#include <iostream>

using namespace std;


int main()
{

	int number = 1;

	while (number <= 2000)
	{
		cout << number;

		if (number % 33 == 0 && number % 50 == 0)
		{
		cout << "FOO "<< "BAR";
		}
		else if (number % 50 == 0)
		{
		cout << "FOO";
		}
		
		else if (number % 33 == 0)
		{
		cout << "BAR";
		}
		else{}

		number++;
		cout << endl;
	}
	return 0;
}