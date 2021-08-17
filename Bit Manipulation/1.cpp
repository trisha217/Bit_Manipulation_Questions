/*
Turn off 1st set bit
Send Feedback
You are given an integer N. You need to make first set bit of binary representation of N to 0 and return the updated N.
Counting of bits start from 0 from right to left.
Input Format :
Integer N 
Output Format :
Updated N
Sample Input 1 :
4
Sample Output 1 :
0
Sample Input 2 :
12 
Sample Output 2 :
8
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i=0;
    cin >> n;
    n = n & (n-1);
    cout << n;
    return 0;
}