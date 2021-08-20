#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            a++;
            cout << a;
        }
        cout << endl;
    }
}
