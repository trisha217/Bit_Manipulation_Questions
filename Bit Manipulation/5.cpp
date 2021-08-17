/* check whether the number is odd or even*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int z = n & (1<<0);
    if(z==0) 
    {
        cout<<"EVEN";
    } 
    else
    {
        cout<<"ODD";
    }
    return 0;
}