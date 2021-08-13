#include <bits/stdc++.h>
using namespace std;
int solve(long long dividend, long long divisor)
{
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    long long ans = 0;
    int temp = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (temp + (divisor << i) <= dividend)
        {
            temp = temp + (divisor << i);
            ans = ans | 1LL << i;
        }
    }
    if (sign == -1)
    {
        ans = -ans;
    }
    return ans;
}

int main()
{
    long long dividend, quo, divisor;
    cout << "Enter the dividend and divisor" << endl;
    cin >> dividend >> divisor;
    quo = solve(dividend, divisor);
    cout << quo << endl;
    return 0;
}
