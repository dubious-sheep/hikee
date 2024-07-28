#include <iostream>
using namespace std;

void runTests()
{
    int x;
    cin >> x;
    cout << x * 10 << '\n';
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