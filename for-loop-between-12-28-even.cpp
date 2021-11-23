#include <iostream>
using namespace std;

int main()
{
    for (int x = 12; x <= 28; x++)
    {
        if (x % 2 == 0)
        {
            cout << "Outputting" << x << "\n";
        }
    }
    return 0;
}