#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));   //we are adding 1 to increment the count
}

int main()
{
    
    int n = 9;
    cout << countSetBits(n);
    return 0;
}