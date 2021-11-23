#include <iostream>
using namespace std;

int main()
{
    int num = 12;
    while (num <= 28)
    {
        if (num % 2 == 0)
        {
            cout << num << " is an even number\n";
        }
        num = num + 1;
    }
    return 0;
}