#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string data;

    for (int i = 0; i < a; i++)
    {
        getline(cin, data);
    }

    cout << b << endl;
    system("pause");
}
