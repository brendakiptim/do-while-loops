#include <iostream>

using namespace std;

int main()
{
    int num = 20;
    int sum = 0;
    while (num <= 25)
    {
        sum = sum + num;
        num = num + 1;
    };

    cout << "Total sum is " << sum << "\n";
    return 0;
}