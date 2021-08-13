#include <bits/stdc++.h>
using namespace std;

int square(int n)
{
    int ans = 0;
    if(n==0){
        return 0;
    }
    if(n<0)
    {
        n=-n;
    }
    // Get floor(n/2) using right shift
    int x = n >> 1;
    if(n & 1)         //if n is odd
    {
        return ((square(x) << 2) + (x << 2) + 1);       //4*square(x) + 4*x + 1
    }                
    else       //if n is even
    {
        return (square(x) << 2);           //4*square(x)
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = square(n);
    cout << ans << endl;
    return 0;
}