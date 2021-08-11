#include <bits/stdc++.h>
using namespace std;

void copySetBits(unsigned &x, unsigned y,
                 unsigned l, unsigned r)
{
    if (l < 1 || r > 32)
    {
        return;
    }
    for (int i = l; i <= r; i++)
    {
        int z = y & (1 << (i - 1));
        if (z != 0)
        {
            x = x | z;
        }
    }
}
int main()
{
    unsigned x = 8, y = 7, l = 1, r = 2;
    copySetBits(x, y, l, r);
    cout << "Modified x is " << x;
    return 0;
}