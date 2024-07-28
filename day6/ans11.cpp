#include <iostream>
#include <vector>
using namespace std;

void runTests()
{
    int n, x;
    cin >> n >> x;

    // find the x highest and then -1
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    cout << *(a.rbegin() + (x - 1)) - 1 << '\n';
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