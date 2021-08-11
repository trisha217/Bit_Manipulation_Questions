#include <bits/stdc++.h>
using namespace std;

vector<int> get2NonRepeatingNos(int arr[], int size)
{
    int xor2 = arr[0];
    vector<int> vec;
    int i;
    int x = 0, y = 0;
    for (i = 1; i < size; i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    int rightmost_set_bit = xor2 & ~(xor2 - 1);
    for (i = 0; i < size; i++)
    {
        if (arr[i] & rightmost_set_bit)
        {
            x = x ^ arr[i];
        }
        else
        {
            y = y ^ arr[i];
        }
    }
    //cout<<x<<y<<endl;
    vec.push_back(x);
    vec.push_back(y);
    return vec;
}

int main()
{
    int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> copy;
    copy = get2NonRepeatingNos(arr, n);
    for (int i = 0; i < copy.size(); i++)
    {
        cout << copy.at(i) << " ";
    }
    cout << endl;
    return 0;
}