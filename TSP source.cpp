#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point {
	int index;
	double x;
	double y;
};

int dist(double x, double y);

int main()
{
	int N;
	vector<point> pt;

	cin >> N;



	for (int i = 0; i < N; i++)
	{
		point p;
		double temp1, temp2;
		p.index = i;
		cin >> temp1 >> temp2;
		p.x = temp1;
		p.y = temp2;

		pt.push_back(p);

	}

	int* tour = new int[N];
	int* used = new int[N];

	tour[0] = 0;
	used[0] = true;

	for (int i = 0; i < N - 1; i++)
	{
		int best = -1;
		for (int j = 0; j < N - 1; j++)
		{
			if (!used[j] && (best == -1 || dist(tour[i - 1], j)) < dist(tour[i - 1], best))
			{
				best = j;
			}
		}
		tour[i] = best;
		used[best] = true;
	}

	for (int i = 0; i < N - 1; i++)
	{
		cout << tour[i] << endl;
	}


	system("pause");
	return 0;
}


int dist(double x, double y)
{
	return (sqrt(pow(x - x, 2) + pow(y - y, 2)));
}