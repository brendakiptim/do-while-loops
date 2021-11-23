// 081315 - brenda kiptim
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num = 20;
    do
    {
        sum = sum + num;
        cout << "Current Number is " << num << ".\n";
        cout << "Current sum is " << sum << " \n;";
        num = num + 1;
    } while (num <= 25);
    return 0;
}