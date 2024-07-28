#include <iostream>
using namespace std;

void runTests()
{
    uint8_t a, b, c;
    cin >> a >> b >> c;

    cout << ((a == b || a == c || b == c) ? "YES" : "NO") << '\n';
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