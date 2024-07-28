#include <iostream>
using namespace std;

void runTests()
{
    // ? weird stuff: you get wrong answer if you use uint8_t, makes no sense...
    // * probably because it overflows beyond 255, still my answers are below that
    // * doesn't make sense
    uint16_t x, y;

    cin >> x >> y;
    cout << (y > x ? x + (y - x) * 2 : y) << '\n';
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