#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void runTests()
{
    vector<short> n(3);
    for (auto x : n)
        cin >> x;
    sort(n.begin(), n.end());
    cout << n[1] << '\n';
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