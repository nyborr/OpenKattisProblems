// ABC
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	int a, b, c;
	char arr[3];

	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (a > b)
		{
			swap(a, b);
		}
		if (b > c)
		{
			swap(b, c);
		}
		if (a > c)
		{
			swap(a, c);
		}

	}



	if (arr[0] == 'A' && arr[1] == 'B')
	{
		cout << a << " " << b << " "<< c;
	}
	if (arr[0] == 'B' && arr[1] == 'A')
	{
		cout << b << " " << a << " " << c;
	}
	if (arr[0] == 'C' && arr[1] == 'B')
	{
		cout << c << " " << b << " " << a;
	}
	if (arr[0] == 'C' && arr[1] == 'A')
	{
		cout << c << " " << a << " " << b;
	}
	if (arr[0] == 'A' && arr[1] == 'C')
	{
		cout << a << " " << c << " " << b;
	}
	if (arr[0] == 'B' && arr[1] == 'C')
	{
		cout << b << " " << c << " " << a;
	}


	return 0;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

