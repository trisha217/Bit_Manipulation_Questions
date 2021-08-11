#include <iostream>
using namespace std;

int countBitsFlip(int a, int b)
{
    int count = 0;
    int z = a ^ b;
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        int res = z & (1 << i);
        if (res != 0)
        {
            count++;
        }
    }
    return count;

    // Your logic here
}

int main()
{
    int a = 10;
    int b = 20;
    cout << countBitsFlip(a, b)<<endl;
    return 0;
}