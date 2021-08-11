#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(unsigned n)
{
    int z = n & (n - 1);
    if (n != 0)
    {
        if (z == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int findPosition(unsigned n)
{
    unsigned i = 1;
    unsigned count = 1;
    if (!isPowerOfTwo(n))
    {
        return -1;
    }
    while (!(i & n))
    {
        i = (i << 1);
        count++;
    }
    return count;
}

int main(void)
{
    int n = 16;
    int pos = findPosition(n);
    (pos == -1) ? cout << "n = " << n << ", Invalid number" << endl : cout << "n = " << n << ", Position " << pos << endl;
    n = 12;
    pos = findPosition(n);
    (pos == -1) ? cout << "n = " << n << ", Invalid number" << endl : cout << "n = " << n << ", Position " << pos << endl;
    n = 128;
    pos = findPosition(n);
    (pos == -1) ? cout << "n = " << n << ", Invalid number" << endl : cout << "n = " << n << ", Position " << pos << endl;
    return 0;
}
