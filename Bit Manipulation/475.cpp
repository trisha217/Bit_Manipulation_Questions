#include <iostream>
using namespace std;

int largestPowOf2(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x-1;
}

int solve(int n)
{
    //base case
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int x = largestPowOf2(n);
        int bitsUpto2RaiseToX = x * (1 << (x - 1)); // x multiplied by 2 raise to the power of x
        int onesInBitsleft = n - (1 << x) + 1;
        int rest = n - (1 << x);
        int result = bitsUpto2RaiseToX + onesInBitsleft + solve(rest);
        return result;
    }
}


int main()
{
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}