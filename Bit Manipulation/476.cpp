#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int z = n & (n - 1);
    if (n != 0)
    {
        if (z == 0)
        {
            cout << "A POWER OF TWO";
        }
        else
        {
            cout << "NOT A POWER OF TWO";
        }
    }
    else
    {
        cout << "NOT A POWER OF TWO";
    }
    return 0;
}