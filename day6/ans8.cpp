#include <iostream>
using namespace std;

void runTests()
{
    uint16_t n;
    cin >> n;
    cout << (n % 14 == 0 ? "Alice" : (n % 9 == 0 && n % 2 != 0 ? "Bob" : "Charlie")) << '\n';
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