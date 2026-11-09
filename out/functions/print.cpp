#include <iostream>
using namespace std;

void prime()
{
    for(int n = 2; n <= 100; n++)
    {
        int i;

        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
                break;
        }

        if(i == n)
            cout << n << " ";
    }
}

int main()
{
    prime();
    return 0;
}