#include <iostream>
using namespace std;

void runTests()
{
    uint16_t a, b;
    cin >> a >> b;
    cout << a % b << '\n';
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