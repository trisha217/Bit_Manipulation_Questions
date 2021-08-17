/*
Find first set bit
Send Feedback
You are given an integer N. You need to return an integer M, in which only one bit is set which at position of lowest set bit of N (from right to left).
Input Format :
Integer N
Output Format :
Integer M
Sample Input 1 :
7
Sample Output 1 :
1
Sample Input 2 :
12
Sample Output 2 :
4
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int z;
    while (1)
    {
        z = n & (1 << i);
        if (z != 0)
        {
            cout << (i+1)<<"th bit is Set" << endl;
            break;
        }
        i++;
    }
    return 0;
}