#include <iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 50; i++)
	{

		if (i % 3 != 0 && i % 5 != 0)
		{
			cout << i << endl;
		}

		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}

		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}

		else if (i % 7 == 0)
		{
			cout << "Woof" << endl;
		}

		else if (i % 3 == 0 && i % 7 == 0)
		{
			cout << "FizzWoof" << endl;
		}

		else if (i % 5 == 0 && i % 7 == 0)
		{
			cout << "BuzzWoof" << endl;
		}

		else if (i % 3 == 0 && i % 5 == 0 && i & 7 == 0)
		{
			cout << "FizzBuzzWoof" << endl;
		}


	}
	}
