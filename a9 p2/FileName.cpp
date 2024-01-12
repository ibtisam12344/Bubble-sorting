#include<iostream>
using namespace std;
int main()
{
	int array[] = { 4,9,1,3 };
	for (int e = 0; e < 4; e++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (array[e] <= array[i])
			{
				swap(array[e], array[i]);
			}
		}
	}cout << "The sorted array is:" << endl;
	for (int e = 0; e < 4; e++)
	{
		cout << array[e] << " ";
	}

	return 0;
}