#include <iostream>
#include <string.h>
using namespace std;

void runTests()
{
    string n;
    int sum = 0;
    cin >> n;

    for (char c : n)
        sum += stoi(string(1, c));

    cout << sum << '\n';
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