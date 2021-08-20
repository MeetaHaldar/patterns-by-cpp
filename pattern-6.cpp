#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 0;
        for (int j = 1; j <= n; j++)
        {
            a++;
            cout << a;
        }
        cout << endl;
    }
}