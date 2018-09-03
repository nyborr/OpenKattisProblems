#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

	int num;
	string temp;
	vector<string> words;
	
	cin >> num;
	getline(cin, temp);

	for (int i = 0; i < num; i++)
	{

		getline(cin, temp);
		words.push_back(temp);
	}
	
	cout << endl << endl;


	for (int i = 0; i < num; i++)
	{
		if (words[i].substr(0, 10) == "Simon says")
		{
			cout << words[i].substr(11, words[i].length()) << endl;
		}
	}

	return 0;
}