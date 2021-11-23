// 081315 - brenda kiptim
#include <iostream>
using namespace std;

int main()
{

    int num = 19;

    do
    {
        if (num % 2 == 0)
        {
            cout << num << " is an even number\n ";
        }
        num = num + 1;
    } while (num <= 50);
    return 0;
}