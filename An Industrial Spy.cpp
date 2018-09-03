#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool isPrime(int num);
int convert(char num);
vector<string> permutation(string s, int i, int n, int count);

int main()
{
	int cases, numPrime = 0;

	cin >> cases;
	string* numbers = new string[cases];
	vector<string> permutations;


for (int i = 0; i < cases; i++)
{
	cin >> numbers[i];
}



for (int i = 0; i < cases; i++)
{
	numPrime = 0;
	if (isPrime(stoi(numbers[i])))
	{
		numPrime++;
	}
	for (int j = 0; j < numbers[i].size(); j++)
	{
		if (isPrime(convert(numbers[i][j])) && numbers[i].size() > 1)
		{
			numPrime++;
		}
	}
	cout << "Primes: " << numPrime << endl;
}


system("pause");
return 0;
}


bool isPrime(int num)
{
	bool prime = true;

	if (num == 1)
	{
		return false;
	}

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			prime = false;
		}
	}

	return prime;
}


void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int convert(char num)
{
	switch (num)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	default:
		return 0;
	}
}

vector<string> permutation(string s, int i, int n, int count)
{
	int j;
	vector<string> perm;

	if (i == n) {
		perm[count] = s;
		count++;
	}
	else
	{
		for (int j = i; j < s.length(); j++)
		{
			swap(s[i], s[j]);
			permutation(s, i + 1, n, count);
			swap(s[i], s[j]);
		}
	}
	return perm;
}

