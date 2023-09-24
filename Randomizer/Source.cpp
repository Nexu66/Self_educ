
#include <iostream>
#include<ctime>



using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	srand(time(NULL));
	int const SIZE = 10;
	int arr[SIZE];
	bool TheSame = false;
	for (int i = 0; i < SIZE; )
	{
		TheSame = false;
		int rvalue = rand() % 20;


		for (int a = 0; a < i; a++)
		{
			if (rvalue == arr[a])
			{
				TheSame = true;
				break;
			}
		}

		if (!TheSame)
		{
			arr[i] = rvalue;
			i++;

		}

	}
	for (int i = 0; i < SIZE; i++)
	{

		cout << arr[i] << endl;
	}






	int MinValue = arr[0];
	for (int i = 1; i < SIZE; i++)
	{

		if (MinValue > arr[i])
		{
			MinValue = arr[i];
		}
	}
	cout << "Minimum is: " << MinValue << endl;


	int MaxValue = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (MaxValue < arr[i]) {
			MaxValue = arr[i];
		}
	}
	cout << "Maximum is: " << MaxValue << endl;

}

