#include <iostream>
using namespace std;

int setBits(int N)
{
    int count = 0;
    int i = 0;
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        int z = N & (1 << i);
        if (z != 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
 
    int N = 15;
 
    cout << setBits(N) << endl;
    return 0;
}