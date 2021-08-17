/* Clear All Bits From LSB
Send Feedback
You are given two integers N and i. You need to clear all bits from LSB to ith bit (start i from right to left) and return the updated N.
Counting of bits starts from 0 from right to left.
Input Format :
Two integers N and i (separated by space)
Output Format :
Updated N
Sample Input 1 :
15 2
Sample Output 1 :
3
Sample Output 1 Explanation :
We need to clear all bits from LSB to ith bit i.e. clear 0th and 1st bit.
Sample Input 2 :
4 4
Sample Output 2 :
4
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n >> i;
    int a = n & (1 << i);
    int b = (a - 1);
    int m = ~(a ^ b);
    n = n & m;
    cout << n;
    return 0;
}