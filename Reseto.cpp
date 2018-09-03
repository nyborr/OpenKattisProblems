#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n, k, crossedOut = 0;
	int arr[100000];
	arr[0] = 2;

	cin >> n >> k;


	for (int i = 1; i < n -1; i++)
	{
		arr[i] = arr[i -1 ] + 1;
	}
	
	int count = 0;

	for (int i = 0; i < n - 1 ; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;

	while (crossedOut <= k) {
		if (arr[count] % 2 == 0 && arr[count] != 0)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 3 == 0 && arr[count] != 0 && crossedOut != k && arr[count] % 2 != 0)
		{
			count = 0;
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 4 == 0 && arr[count] != 0 && crossedOut != k)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 5 == 0 && arr[count] != 0 && crossedOut != k)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 6 == 0 && arr[count] != 0 && crossedOut != k)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 7 == 0 && arr[count] != 0 && crossedOut != k)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 8 == 0 && arr[count] != 0 && crossedOut != k)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		if (arr[count] % 9 == 0 && arr[count] != 0 && crossedOut != k)
		{
			if (crossedOut == k)
			{
				cout << arr[count];
				break;
			}
			arr[count] = 0;
			crossedOut++;
		}
		count++;
	}


	system("Pause");
	return 0;
}