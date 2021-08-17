/*
flip ith bit
if it is 1, then make it 0;
if it is 0, make it 1.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n >> i;
    int z = n & (1 << i);
    if (z == 0)
    {
        n = n | (1<<i);
        cout << n;
    }
    else
    {
        n = n ^ (1 << i);
        cout << n;
    }
    return 0;
}