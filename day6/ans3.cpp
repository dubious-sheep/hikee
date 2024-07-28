#include <iostream>
using namespace std;

void runTests()
{
    uint16_t x, y, z;

    cin >> x >> y >> z;
    cout << ((x * 5) + (y * 10)) / z << "\n";
}

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        runTests();
    }
    return 0;
}